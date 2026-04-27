#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Physics/ProximityObjectType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851908
   RuntimeId:        14B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0832
   VfTable:          000000014227F300
   Address (Base):   000000014310EF10
*/
#pragma pack(push, 8)
class ProximityData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ProximityObjectType ProximityType; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ProximityData) == 24);

}
