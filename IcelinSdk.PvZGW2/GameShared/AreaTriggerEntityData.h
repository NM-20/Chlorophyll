#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/AreaTriggerInclude.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BF50
   RuntimeId:        0FF0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B71
   VfTable:          0000000142267EB0
   Address (Base):   00000001430CE870
*/
#pragma pack(push, 16)
class AreaTriggerEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform GeometryTransform; /* 0x0070 */
  AreaTriggerInclude Include; /* 0x00B0 */
  FB_FLOAT32 Radius; /* 0x00B4 */
  FB_FLOAT32 InsideAreaEventRepeatTime; /* 0x00B8 */
  TeamId TeamOfAllies; /* 0x00BC */
  FB_BOOLEAN UseCharacterEntity; /* 0x00C0 */
  FB_BOOLEAN UseRadiusWithGeometryTransform; /* 0x00C1 */
  FB_BOOLEAN UseSphereSweepTest; /* 0x00C2 */
  FB_BOOLEAN IgnoreImmortalCharacters; /* 0x00C3 */
  FB_BOOLEAN IgnoreSwappingCharacters; /* 0x00C4 */
  FB_BOOLEAN PersistentAIOnly; /* 0x00C5 */
  FB_BOOLEAN UseCharacterTransform; /* 0x00C6 */
  FB_BOOLEAN OneInsideAreaEventPerSoldier; /* 0x00C7 */
  FB_BOOLEAN TriggerOnlyOnLeave; /* 0x00C8 */
  FB_BOOLEAN ResetOnEnable; /* 0x00C9 */
  FB_BOOLEAN TriggerOnLeaveOnDeath; /* 0x00CA */
  FB_BOOLEAN TriggerOnLeaveOnDisable; /* 0x00CB */
  char pad_00CC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(AreaTriggerEntityData) == 208);

}
