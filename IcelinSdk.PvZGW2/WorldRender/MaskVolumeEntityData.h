#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/RenderVolumeEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855738
   RuntimeId:        183C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B39
   VfTable:          00000001422BBE10
   Address (Base):   00000001430EA060
*/
#pragma pack(push, 16)
class MaskVolumeEntityData : public RenderVolumeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(MaskVolumeEntityData) == 160);

}
