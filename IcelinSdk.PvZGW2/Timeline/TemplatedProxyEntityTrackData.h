#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/ProxyEntityTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854C88
   RuntimeId:        17B7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CB1
   VfTable:          00000001422B5558
   Address (Base):   000000014310DA70
*/
#pragma pack(push, 8)
class TemplatedProxyEntityTrackData : public ProxyEntityTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TemplatedProxyEntityTrackData) == 56);

}
