#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleEntryListenerBinding.h>
#include <IcelinSdk.PvZGW2/GameShared/VehicleCameraControlBinding.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D100
   RuntimeId:        10D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D3E
   VfTable:          000000014226E3F8
   Address (Base):   00000001430D6A30
*/
#pragma pack(push, 16)
class VehicleEntryListenerComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VehicleEntryListenerBinding VehicleEntryListener; /* 0x0070 */
  VehicleCameraControlBinding VehicleCameraControl; /* 0x01B0 */
  FB_INT32 AnimationEntitySpacePriority; /* 0x01C4 */
  FB_FLOAT32 AnimationWheelTransformDelay; /* 0x01C8 */
  char pad_01CC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D0 */
#pragma pack(pop)

static_assert(sizeof(VehicleEntryListenerComponentData) == 464);

}
