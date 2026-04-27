#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BFC8
   RuntimeId:        26B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D4A
   VfTable:          0000000142366B20
   Address (Base):   00000001430E46C0
*/
#pragma pack(push, 16)
class BuffRadiatorComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BuffData) Buff; /* 0x0070 */
  FB_FLOAT32 ArmingTime; /* 0x0078 */
  FB_FLOAT32 Period; /* 0x007C */
  FB_FLOAT32 Radius; /* 0x0080 */
  FB_BOOLEAN ApplyAtStartOfPeriod; /* 0x0084 */
  char pad_0085[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(BuffRadiatorComponentData) == 144);

}
