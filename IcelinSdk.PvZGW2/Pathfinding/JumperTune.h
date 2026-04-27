#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850638
   RuntimeId:        139F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F1
   VfTable:          000000014227C7E0
   Address (Base):   00000001430FC610
*/
#pragma pack(push, 8)
class JumperTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 speed; /* 0x0018 */
  FB_FLOAT32 arcFraction; /* 0x001C */
  FB_FLOAT32 turnBeforeJumpAngle; /* 0x0020 */
  FB_BOOLEAN keepSpeedWhenSwapToDefault; /* 0x0024 */
  FB_BOOLEAN onlyJumpToEndPoint; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(JumperTune) == 40);

}
