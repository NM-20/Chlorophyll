#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterSpawnTemplateData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868DC0
   RuntimeId:        242F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0711
   VfTable:          0000000142356198
   Address (Base):   00000001430BD540
*/
#pragma pack(push, 8)
class PVZCharacterSpawnTemplateData : public CharacterSpawnTemplateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DisplayName; /* 0x0038 */
  FB_HANDLE(class BehaviorTreeData) BehaviorTreeOverride; /* 0x0040 */
  FB_HANDLE(class TargetEvaluationConstantData) TargetingSettings; /* 0x0048 */
  FB_HANDLE(class GameIntensityTemplateData) Intensity; /* 0x0050 */
  FB_HANDLE(class MovementStyleData) MovementStylesOverride; /* 0x0058 */
  FB_STDARRAY(FB_FLOAT32) HealthOverride; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterSpawnTemplateData) == 104);

}
