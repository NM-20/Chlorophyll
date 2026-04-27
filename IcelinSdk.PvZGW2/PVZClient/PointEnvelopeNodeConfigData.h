#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Core/MultiPointLine.h>

namespace fb
{

/* TypeInfo (Array): 00000001428594F0
   RuntimeId:        1B1C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DFB
   VfTable:          00000001422DC1D8
   Address (Base):   000000014310C630
*/
#pragma pack(push, 8)
class PointEnvelopeNodeConfigData : public AudioGraphNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MultiPointLine Envelope; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PointEnvelopeNodeConfigData) == 32);

}
