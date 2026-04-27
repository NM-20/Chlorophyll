#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/DriverComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A6B8
   RuntimeId:        0E9A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D48
   VfTable:          0000000142266428
   Address (Base):   00000001430ED8A0
*/
#pragma pack(push, 16)
class DriverStaticObjectComponentData : public DriverComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Acceleration; /* 0x0080 */
  FB_FLOAT32 Deceleration; /* 0x0084 */
  FB_FLOAT32 TurningRadius; /* 0x0088 */
  FB_BOOLEAN TurnWhileStill; /* 0x008C */
  FB_BOOLEAN AlignWithGroundNormal; /* 0x008D */
  char pad_008E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(DriverStaticObjectComponentData) == 144);

}
