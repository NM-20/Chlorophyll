#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865AB8
   RuntimeId:        2321
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B77
   VfTable:          0000000142350CE8
   Address (Base):   00000001430D3EB0
*/
#pragma pack(push, 16)
class PlayableAreaTriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TimeToReturn; /* 0x0060 */
  TeamId Team; /* 0x0064 */
  FB_BOOLEAN IsAiAllowedOutside; /* 0x0068 */
  FB_BOOLEAN IgnoreVehicleInExcludedGeometry; /* 0x0069 */
  FB_BOOLEAN TestGeometry3D; /* 0x006A */
  FB_BOOLEAN TestExcludeGeometry3D; /* 0x006B */
  FB_BOOLEAN IsTeamSpecific; /* 0x006C */
  FB_BOOLEAN Enabled; /* 0x006D */
  char pad_006E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PlayableAreaTriggerEntityData) == 112);

}
