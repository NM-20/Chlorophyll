#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856AD8
   RuntimeId:        1931
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0817
   VfTable:          00000001422CB508
   Address (Base):   00000001430FB110
*/
#pragma pack(push, 8)
class UIFontMappingCollection : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIFontMapping) Fonts; /* 0x0018 */
  FB_REFARRAY(class UITextDatabase) TextDatabase; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIFontMappingCollection) == 40);

}
