#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836068
   RuntimeId:        0385
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF9
   VfTable:          00000001421F1548
   Address (Base):   00000001430D1100
*/
#pragma pack(push, 8)
class AudioGraphNodeConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AudioGraphNodeData) Node; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphNodeConfigData) == 24);

}
