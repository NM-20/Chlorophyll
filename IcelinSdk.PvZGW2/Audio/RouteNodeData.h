#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837320
   RuntimeId:        04AC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1244
   VfTable:          00000001421FA2D0
   Address (Base):   0000000143117B50
*/
#pragma pack(push, 8)
class RouteNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort In; /* 0x0010 */
  FB_REFARRAY(class RouteEntry) Routes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RouteNodeData) == 32);

}
