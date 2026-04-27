#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/DismembermentBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863C68
   RuntimeId:        2163
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB5
   VfTable:          00000001423532F0
   Address (Base):   00000001430D5590
*/
#pragma pack(push, 16)
class PVZDismembermentComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DismembermentBinding DismembermentBinding; /* 0x0070 */
  char pad_0124[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(PVZDismembermentComponentData) == 304);

}
