#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851C90
   RuntimeId:        14EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A58
   VfTable:          000000014227ED80
   Address (Base):   00000001430DB5D0
*/
#pragma pack(push, 8)
class PhysicsConstraintOwnerData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PhysicsConstraintData) ConstraintData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PhysicsConstraintOwnerData) == 32);

}
