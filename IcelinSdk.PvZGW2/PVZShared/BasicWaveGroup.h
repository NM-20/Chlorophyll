#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AISpawnNodeBase.h>

namespace fb
{

/* TypeInfo (Array): 00000001428735C8
   RuntimeId:        2BCC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E9D
   VfTable:          0000000142379208
   Address (Base):   00000001430D2FB0
*/
#pragma pack(push, 8)
class BasicWaveGroup : public AISpawnNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BasicWaveComposition) Waves; /* 0x0018 */
  FB_BOOLEAN AutoGenerateEvents; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BasicWaveGroup) == 40);

}
