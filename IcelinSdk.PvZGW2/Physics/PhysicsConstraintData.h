#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851C70
   RuntimeId:        14EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C5C
   VfTable:          000000014227ED48
   Address (Base):   00000001430D0860
*/
#pragma pack(push, 16)
class PhysicsConstraintData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BreakThreshold; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform Transform; /* 0x0020 */
  Realm Realm; /* 0x0060 */
  char pad_0064[0x0004];
  FB_HANDLE(class PhysicsConstraintInitialStanceData) InitialStanceData; /* 0x0068 */
  FB_BOOLEAN IsBreakable; /* 0x0070 */
  FB_BOOLEAN Stabilized; /* 0x0071 */
  FB_BOOLEAN EnableContinuousSimulation; /* 0x0072 */
  FB_UINT8 WorldIndex; /* 0x0073 */
  FB_BOOLEAN Motorized; /* 0x0074 */
  char pad_0075[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PhysicsConstraintData) == 128);

}
