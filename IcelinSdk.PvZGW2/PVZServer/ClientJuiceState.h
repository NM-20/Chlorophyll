#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/MetricState.h>

namespace fb
{

/* TypeInfo (Array): 00000001428606A8
   RuntimeId:        1E76
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05E8
   VfTable:          00000001423203C0
   Address (Base):   0000000143109930
*/
#pragma pack(push, 8)
class ClientJuiceState : public MetricState
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SessionId; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ClientJuiceState) == 40);

}
