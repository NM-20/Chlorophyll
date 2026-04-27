#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864358
   RuntimeId:        21CF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F1
   VfTable:          00000001423528B8
   Address (Base):   00000001430DA430
*/
#pragma pack(push, 8)
class CustomizationUnlockInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UnlockAssetBase) UnlockAsset; /* 0x0010 */
  FB_UINT32 UnlockId; /* 0x0018 */
  FB_BOOLEAN IsUnlocked; /* 0x001C */
  FB_BOOLEAN IsTempUnlocked; /* 0x001D */
  FB_BOOLEAN IsHidden; /* 0x001E */
  FB_BOOLEAN IsSeen; /* 0x001F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CustomizationUnlockInfo) == 32);

}
