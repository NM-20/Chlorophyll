#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852B20
   RuntimeId:        15DA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          095C
   VfTable:          00000001422A1800
   Address (Base):   00000001430D5CB0
*/
#pragma pack(push, 8)
class ProceduralAnimationTypeSimple : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BendMultiplier; /* 0x0010 */
  FB_FLOAT32 WiggleSpeedMultiplier; /* 0x0014 */
  FB_FLOAT32 WindInfluenceMultiplier; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ProceduralAnimationTypeSimple) == 32);

}
