#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428627B8
   RuntimeId:        2086
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D6
   VfTable:          0000000142343BB0
   Address (Base):   00000001430E8260
*/
#pragma pack(push, 8)
class PVZWriteGameStateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PVZWriteGameStateData) GameStates; /* 0x0018 */
  FB_BOOLEAN StartWritingContinouslyOnSpawn; /* 0x0020 */
  FB_BOOLEAN WriteOnceOnSpawn; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZWriteGameStateEntityData) == 40);

}
