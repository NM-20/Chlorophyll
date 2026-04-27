#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428755F0
   RuntimeId:        2D14
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0811
   VfTable:          000000014238C818
   Address (Base):   00000001430D2E30
*/
#pragma pack(push, 8)
class TelemetryTransportData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TransportId; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetryTransportData) == 32);

}
