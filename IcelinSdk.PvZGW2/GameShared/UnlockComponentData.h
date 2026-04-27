#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E680
   RuntimeId:        1201
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D55
   VfTable:          0000000142273118
   Address (Base):   00000001430BFEF0
*/
#pragma pack(push, 16)
class UnlockComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UnlockAssetBase) UnlockAsset; /* 0x0070 */
  FB_GUID UnlockAssetGuid; /* 0x0078 */
  FB_UINT32 UnlockIdentifier; /* 0x0088 */
  FB_BOOLEAN InvertUnlockTest; /* 0x008C */
  FB_BOOLEAN UnlockableFromAllEntries; /* 0x008D */
  FB_BOOLEAN DeactivateCheckOnEnteringEntry; /* 0x008E */
  char pad_008F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(UnlockComponentData) == 144);

}
