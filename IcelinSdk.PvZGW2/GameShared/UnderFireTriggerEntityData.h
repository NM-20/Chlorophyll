#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>
#include <IcelinSdk.PvZGW2/GameShared/AreaTriggerInclude.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C110
   RuntimeId:        100C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B69
   VfTable:          0000000142267B68
   Address (Base):   00000001430ED1E0
*/
#pragma pack(push, 16)
class UnderFireTriggerEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0070 */
  FB_FLOAT32 CoolDownTime; /* 0x0074 */
  MaterialDecl TriggerOnMaterialOnly; /* 0x0078 */
  AreaTriggerInclude TriggeredBy; /* 0x007C */
  FB_BOOLEAN UseTriggerOnMaterialOnly; /* 0x0080 */
  FB_BOOLEAN DisableIfTrackEntityIsLost; /* 0x0081 */
  FB_BOOLEAN RandomYaw; /* 0x0082 */
  FB_BOOLEAN IndicateHit; /* 0x0083 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(UnderFireTriggerEntityData) == 144);

}
