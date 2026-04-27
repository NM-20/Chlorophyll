#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePortGroup.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/DebugRenderType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428357F8
   RuntimeId:        02FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11A4
   VfTable:          00000001421F18E8
   Address (Base):   00000001431198F0
*/
#pragma pack(push, 8)
class DebugValueInput : public AudioGraphNodePortGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort V; /* 0x0010 */
  FB_CSTRING Name; /* 0x0018 */
  DebugRenderType RenderType; /* 0x0020 */
  FB_FLOAT32 Min; /* 0x0024 */
  FB_FLOAT32 Max; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DebugValueInput) == 48);

}
