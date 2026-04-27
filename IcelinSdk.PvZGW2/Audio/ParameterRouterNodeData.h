#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835F68
   RuntimeId:        0375
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1267
   VfTable:          00000001421F15D0
   Address (Base):   00000001430FFFD0
*/
#pragma pack(push, 8)
class ParameterRouterNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort RouteIn; /* 0x0010 */
  AudioGraphNodePort RouteOut; /* 0x0018 */
  AudioGraphNodePort DefaultOut; /* 0x0020 */
  FB_REFARRAY(class ParameterRouterEntry) ParameterRouterEntries; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ParameterRouterNodeData) == 48);

}
