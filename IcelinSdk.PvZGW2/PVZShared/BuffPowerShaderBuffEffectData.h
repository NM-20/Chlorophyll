#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C4C8
   RuntimeId:        26EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0916
   VfTable:          0000000142366740
   Address (Base):   00000001430F6190
*/
#pragma pack(push, 8)
class BuffPowerShaderBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Parameter; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BuffPowerShaderBuffEffectData) == 32);

}
