#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AE20
   RuntimeId:        085B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09EE
   VfTable:          000000014220BA88
   Address (Base):   00000001430F02A0
*/
#pragma pack(push, 8)
class SpriteDofParamConverterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpriteDofOutFocusStart; /* 0x0018 */
  FB_FLOAT32 SpriteDofOutFocusEnd; /* 0x001C */
  FB_FLOAT32 SpriteDofMaxBlurFactor; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SpriteDofParamConverterEntityData) == 40);

}
