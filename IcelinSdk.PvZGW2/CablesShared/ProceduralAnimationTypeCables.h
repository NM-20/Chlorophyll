#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/ProceduralAnimationTypeSimple.h>

namespace fb
{

/* TypeInfo (Array): 00000001428344F0
   RuntimeId:        01D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          095D
   VfTable:          00000001421EBBA0
   Address (Base):   0000000143100DB0
*/
#pragma pack(push, 8)
class ProceduralAnimationTypeCables : public ProceduralAnimationTypeSimple
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 HalfThickness; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ProceduralAnimationTypeCables) == 40);

}
