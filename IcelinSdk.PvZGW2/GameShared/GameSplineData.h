#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/CustomSplineData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ADE8
   RuntimeId:        0EF9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0971
   VfTable:          0000000142262A68
   Address (Base):   00000001430FCFD0
*/
#pragma pack(push, 8)
class GameSplineData : public CustomSplineData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec3) Normals; /* 0x0028 */
  FB_INT32 NumSamples; /* 0x0030 */
  char pad_0034[0x0004];
  FB_STDARRAY(FB_FLOAT32) Lengths; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(GameSplineData) == 64);

}
