#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/LogicalExpressionOperator.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835A78
   RuntimeId:        0327
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1259
   VfTable:          00000001421F17B8
   Address (Base):   00000001431006F0
*/
#pragma pack(push, 8)
class LogicalExpressionNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Reset; /* 0x0010 */
  FB_REFARRAY(class LogicalExpressionEntry) Inputs; /* 0x0018 */
  AudioGraphNodePort Trigger; /* 0x0020 */
  LogicalExpressionOperator Operator; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LogicalExpressionNodeData) == 48);

}
