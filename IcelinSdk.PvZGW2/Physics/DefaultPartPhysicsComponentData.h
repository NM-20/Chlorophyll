#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PartPhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851A68
   RuntimeId:        14CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D05
   VfTable:          000000014227F180
   Address (Base):   00000001430EB0E0
*/
#pragma pack(push, 16)
class DefaultPartPhysicsComponentData : public PartPhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(DefaultPartPhysicsComponentData) == 144);

}
