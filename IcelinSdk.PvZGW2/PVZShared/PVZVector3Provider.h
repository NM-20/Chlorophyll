#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D238
   RuntimeId:        27B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10A8
   VfTable:          0000000142365E10
   Address (Base):   0000000143105D90
*/
#pragma pack(push, 8)
class PVZVector3Provider : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZVector3Provider) == 16);

}
