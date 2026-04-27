#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/ProceduralAnimationTypeSimple.h>
#include <IcelinSdk.PvZGW2/Render/ProceduralAnimationWindMethod.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852BA0
   RuntimeId:        15E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0960
   VfTable:          00000001422A17F0
   Address (Base):   000000014310E730
*/
#pragma pack(push, 8)
class ProceduralAnimationTypeWind : public ProceduralAnimationTypeSimple
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ProceduralAnimationWindMethod WindMethod; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ProceduralAnimationTypeWind) == 40);

}
