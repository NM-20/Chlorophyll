#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F008
   RuntimeId:        1283
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF6
   VfTable:          0000000142274650
   Address (Base):   00000001430D60D0
*/
#pragma pack(push, 8)
class WaypointData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SchematicsNameHash; /* 0x0010 */
  FB_UINT32 WaypointId; /* 0x0014 */
  FB_BOOLEAN UseClientsPosition; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WaypointData) == 32);

}
