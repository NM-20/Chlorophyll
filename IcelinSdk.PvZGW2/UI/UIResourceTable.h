#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854F80
   RuntimeId:        17F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          071C
   VfTable:          00000001422B83A8
   Address (Base):   00000001430FB350
*/
#pragma pack(push, 8)
class UIResourceTable : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIResourceTableEntry) Entries; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIResourceTable) == 32);

}
