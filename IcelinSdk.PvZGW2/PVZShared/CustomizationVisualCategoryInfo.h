#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/CustomizationLayer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428643F8
   RuntimeId:        21D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF4
   VfTable:          00000001423527C0
   Address (Base):   00000001430E5560
*/
#pragma pack(push, 8)
class CustomizationVisualCategoryInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING CategoryName; /* 0x0010 */
  FB_UINT32 CategoryId; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING CategoryIconId; /* 0x0020 */
  FB_CSTRING LockedCategoryReason; /* 0x0028 */
  FB_REFARRAY(class CustomizationAccessoryInfo) Accessories; /* 0x0030 */
  FB_UINT32 SelectedAccessoryIndex; /* 0x0038 */
  CustomizationLayer UILockLayer; /* 0x003C */
  FB_BOOLEAN LockedByMask; /* 0x0040 */
  FB_BOOLEAN ContainsNewItems; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(CustomizationVisualCategoryInfo) == 72);

}
