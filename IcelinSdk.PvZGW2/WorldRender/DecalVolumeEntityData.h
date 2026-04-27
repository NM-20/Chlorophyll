#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/RenderVolumeEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855718
   RuntimeId:        183A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B38
   VfTable:          00000001422BBDD8
   Address (Base):   00000001430EA0C0
*/
#pragma pack(push, 16)
class DecalVolumeEntityData : public RenderVolumeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(DecalVolumeEntityData) == 160);

}
