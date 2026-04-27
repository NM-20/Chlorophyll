#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864478
   RuntimeId:        21E1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1292
   VfTable:          0000000142352810
   Address (Base):   00000001430E53E0
*/
#pragma pack(push, 8)
class CustomizationGestureCategoryInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING CategoryName; /* 0x0010 */
  FB_UINT32 CategoryId; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING CategoryIconId; /* 0x0020 */
  FB_UINT32 SelectedGestureIndex; /* 0x0028 */
  FB_BOOLEAN ContainsNewItems; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CustomizationGestureCategoryInfo) == 48);

}
