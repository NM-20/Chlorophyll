#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851AC8
   RuntimeId:        14D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C7C
   VfTable:          000000014227F0B8
   Address (Base):   00000001430D5E30
*/
#pragma pack(push, 8)
class PhysicsActionData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PhysicsActionData) == 24);

}
