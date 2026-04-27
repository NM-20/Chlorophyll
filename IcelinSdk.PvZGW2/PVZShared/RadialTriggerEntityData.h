#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/RadialTriggerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D318
   RuntimeId:        27BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B7A
   VfTable:          0000000142365F48
   Address (Base):   00000001430D35B0
*/
#pragma pack(push, 16)
class RadialTriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RadialTriggerData TriggerData; /* 0x0060 */
  FB_FLOAT32 MaxTransformDistance; /* 0x0068 */
  FB_BOOLEAN UseMaxTransformDistance; /* 0x006C */
  FB_BOOLEAN Enabled; /* 0x006D */
  char pad_006E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(RadialTriggerEntityData) == 112);

}
