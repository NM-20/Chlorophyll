#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864098
   RuntimeId:        21A5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D2B
   VfTable:          0000000142352BA8
   Address (Base):   00000001430E56E0
*/
#pragma pack(push, 16)
class AimAssistNodeSnapPointComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Priority; /* 0x0070 */
  FB_FLOAT32 UnderReticleSphereRadius; /* 0x0074 */
  FB_FLOAT32 UnderReticleCapsuleLength; /* 0x0078 */
  FB_UINT32 Priority_UnderReticle; /* 0x007C */
  FB_BOOLEAN Enabled; /* 0x0080 */
  char pad_0081[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(AimAssistNodeSnapPointComponentData) == 144);

}
