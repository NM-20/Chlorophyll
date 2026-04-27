#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D478
   RuntimeId:        27D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE4
   VfTable:          0000000142365BC0
   Address (Base):   00000001430E44E0
*/
#pragma pack(push, 8)
class CharacterCameraLocationTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ReturnPlayerPosition; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CharacterCameraLocationTransformLayerData) == 64);

}
