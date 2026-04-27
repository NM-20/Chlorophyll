#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C788
   RuntimeId:        271A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0901
   VfTable:          0000000142366668
   Address (Base):   00000001430F6010
*/
#pragma pack(push, 16)
class ShaderBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Parameter; /* 0x0018 */
  Vec4 Value; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ShaderBuffEffectData) == 48);

}
