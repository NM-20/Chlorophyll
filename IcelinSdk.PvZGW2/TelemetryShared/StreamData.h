#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875550
   RuntimeId:        2D0A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C0
   VfTable:          000000014238C8D8
   Address (Base):   00000001430E1180
*/
#pragma pack(push, 8)
class StreamData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TelemetryTransportData) Transports; /* 0x0018 */
  GamePlatform Platform; /* 0x0020 */
  FB_UINT32 StreamId; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(StreamData) == 40);

}
