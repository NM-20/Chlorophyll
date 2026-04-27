#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SimpleTransformOperation.h>
#include <IcelinSdk.PvZGW2/Audio/AngleUnit.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835D88
   RuntimeId:        0357
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          126A
   VfTable:          00000001421F16A0
   Address (Base):   00000001431002D0
*/
#pragma pack(push, 8)
class SimpleTransformNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort X; /* 0x0010 */
  AudioGraphNodePort Y; /* 0x0018 */
  AudioGraphNodePort Z; /* 0x0020 */
  SimpleTransformOperation Operation; /* 0x0028 */
  AngleUnit AngleUnit; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SimpleTransformNodeData) == 48);

}
