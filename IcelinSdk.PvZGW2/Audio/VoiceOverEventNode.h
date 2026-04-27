#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverStructureNode.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838950
   RuntimeId:        0604
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DEA
   VfTable:          00000001421F9638
   Address (Base):   00000001430FF130
*/
#pragma pack(push, 16)
class VoiceOverEventNode : public VoiceOverStructureNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverIntervalNode) Interval; /* 0x0018 */
  Vec3 DebugColor; /* 0x0020 */
  FB_REFARRAY(class VoiceOverStructureNode) Relationship; /* 0x0030 */
  FB_REFARRAY(class VoiceOverValueRedirect) Redirects; /* 0x0038 */
  FB_HANDLE(class VoiceOverEvent) Event; /* 0x0040 */
  FB_FLOAT32 DebugIntervalTime; /* 0x0048 */
  FB_BOOLEAN DebugEnabled; /* 0x004C */
  char pad_004D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverEventNode) == 80);

}
