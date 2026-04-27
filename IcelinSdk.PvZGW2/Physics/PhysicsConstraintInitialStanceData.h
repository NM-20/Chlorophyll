#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851D30
   RuntimeId:        14F6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AF1
   VfTable:          000000014227EBF8
   Address (Base):   00000001430DB510
*/
#pragma pack(push, 16)
class PhysicsConstraintInitialStanceData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PhysicsConstraintData) ContainingConstraintData; /* 0x0018 */
  LinearTransform Transform; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PhysicsConstraintInitialStanceData) == 96);

}
