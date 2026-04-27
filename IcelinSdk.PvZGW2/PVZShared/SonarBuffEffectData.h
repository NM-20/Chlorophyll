#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CC28
   RuntimeId:        2764
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          091C
   VfTable:          0000000142366350
   Address (Base):   00000001430D9530
*/
#pragma pack(push, 8)
class SonarBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SonarBuffEffectData) == 24);

}
