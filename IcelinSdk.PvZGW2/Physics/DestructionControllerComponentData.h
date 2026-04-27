#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850DC0
   RuntimeId:        1410
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA7
   VfTable:          000000014227F7C8
   Address (Base):   00000001430FB950
*/
#pragma pack(push, 16)
class DestructionControllerComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BreakingLength; /* 0x0070 */
  FB_FLOAT32 FracturePosition; /* 0x0074 */
  FB_FLOAT32 DestructionRadius; /* 0x0078 */
  FB_FLOAT32 Delay; /* 0x007C */
  FB_FLOAT32 RefineRadius; /* 0x0080 */
  FB_BOOLEAN StructuralIntegrityAnalyzerEnable; /* 0x0084 */
  char pad_0085[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(DestructionControllerComponentData) == 144);

}
