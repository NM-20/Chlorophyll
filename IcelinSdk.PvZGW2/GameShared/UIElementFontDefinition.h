#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C3A8
   RuntimeId:        102E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1291
   VfTable:          0000000142267A60
   Address (Base):   00000001431127B0
*/
#pragma pack(push, 8)
class UIElementFontDefinition : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIImmediateModeFontLookup) FontLookup; /* 0x0010 */
  FB_FLOAT32 PointSize; /* 0x0018 */
  FB_FLOAT32 LetterSpacing; /* 0x001C */
  FB_INT32 RowSpacing; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIElementFontDefinition) == 40);

}
