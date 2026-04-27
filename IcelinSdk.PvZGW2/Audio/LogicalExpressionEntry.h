#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835A38
   RuntimeId:        0323
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11AA
   VfTable:          00000001421F17C8
   Address (Base):   0000000143119590
*/
#pragma pack(push, 8)
class LogicalExpressionEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Trigger; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LogicalExpressionEntry) == 24);

}
