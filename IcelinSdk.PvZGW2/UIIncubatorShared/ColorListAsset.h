#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/ConfigListAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876328
   RuntimeId:        2DA2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0628
   VfTable:          0000000142393450
   Address (Base):   00000001430F4BD0
*/
#pragma pack(push, 8)
class ColorListAsset : public ConfigListAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ColorData) ColorTypes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ColorListAsset) == 32);

}
