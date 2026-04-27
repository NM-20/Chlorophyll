#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855758
   RuntimeId:        183E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A2B
   VfTable:          00000001422BBE48
   Address (Base):   000000014310D7D0
*/
#pragma pack(push, 8)
class RadiosityEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(RadiosityEntityData) == 24);

}
