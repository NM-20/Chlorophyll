#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428519E8
   RuntimeId:        14C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D06
   VfTable:          000000014227F210
   Address (Base):   00000001430FBA70
*/
#pragma pack(push, 16)
class HealthComponentData : public ComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(HealthComponentData) == 112);

}
