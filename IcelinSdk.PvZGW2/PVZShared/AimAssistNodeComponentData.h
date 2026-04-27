#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864078
   RuntimeId:        21A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D29
   VfTable:          0000000142352C28
   Address (Base):   00000001430E5740
*/
#pragma pack(push, 16)
class AimAssistNodeComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 StickyCenterOffset; /* 0x0070 */
  TeamId Team; /* 0x0080 */
  FB_BOOLEAN Enabled; /* 0x0084 */
  FB_BOOLEAN GetTeamFromOwner; /* 0x0085 */
  FB_BOOLEAN ColorPlayerReticle; /* 0x0086 */
  char pad_0087[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(AimAssistNodeComponentData) == 144);

}
