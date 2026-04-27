#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAvailability.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C800
   RuntimeId:        1066
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0721
   VfTable:          0000000142267808
   Address (Base):   00000001430B5FC0
*/
#pragma pack(push, 8)
class UnlockAssetBase : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UnlockUserDataBase) UnlockUserData; /* 0x0018 */
  FB_CSTRING DebugUnlockId; /* 0x0020 */
  FB_UINT32 Identifier; /* 0x0028 */
  FB_UINT32 UnlockScore; /* 0x002C */
  FB_HANDLE(class UnlockAssetBase) NextLevelUnlockAsset; /* 0x0030 */
  UnlockAvailability AvailableForPlayer; /* 0x0038 */
  FB_UINT32 DLCVersion; /* 0x003C */
  FB_BOOLEAN AutoAvailable; /* 0x0040 */
  FB_BOOLEAN HiddenInProgression; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UnlockAssetBase) == 72);

}
