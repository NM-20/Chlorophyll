#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863EC8
   RuntimeId:        2189
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D9D
   VfTable:          0000000142352EA8
   Address (Base):   00000001430D5290
*/
#pragma pack(push, 16)
class PVZVehicleStaminaComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING StaminaMeterName; /* 0x0070 */
  FB_FLOAT32 Duration; /* 0x0078 */
  FB_FLOAT32 BaseDecayRate; /* 0x007C */
  FB_FLOAT32 MovementDecayRate; /* 0x0080 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZVehicleStaminaComponentData) == 144);

}
