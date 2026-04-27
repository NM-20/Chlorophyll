#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Core/DesignerEnumerationSortType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833818
   RuntimeId:        013B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0708
   VfTable:          00000001421E50E0
   Address (Base):   000000014311C470
*/
#pragma pack(push, 8)
class DesignerEnumeration : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DesignerEnumerationSortType SortDisplay; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(struct DesignerEnumerationEntry) Entries; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DesignerEnumeration) == 40);

}
