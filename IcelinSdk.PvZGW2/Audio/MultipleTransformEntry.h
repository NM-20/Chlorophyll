#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SimpleTransformOperation.h>
#include <IcelinSdk.PvZGW2/Audio/AngleUnit.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835DA8
   RuntimeId:        0359
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11AB
   VfTable:          00000001421F1690
   Address (Base):   00000001431193B0
*/
#pragma pack(push, 8)
class MultipleTransformEntry : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Y; /* 0x0010 */
  AudioGraphNodePort Z; /* 0x0018 */
  SimpleTransformOperation Operation; /* 0x0020 */
  AngleUnit AngleUnit; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MultipleTransformEntry) == 40);

}
