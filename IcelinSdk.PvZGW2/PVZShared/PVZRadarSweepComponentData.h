#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863DE8
   RuntimeId:        217B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D56
   VfTable:          0000000142352DC8
   Address (Base):   00000001430D53B0
*/
#pragma pack(push, 16)
class PVZRadarSweepComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SweepRadius; /* 0x0070 */
  FB_FLOAT32 SweepInterval; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZRadarSweepComponentData) == 128);

}
