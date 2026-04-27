#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZGameStateData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862718
   RuntimeId:        207C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          127B
   VfTable:          0000000142343AC8
   Address (Base):   00000001430D58F0
*/
#pragma pack(push, 8)
class PVZWriteGameStateData : public PVZGameStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZWriteGameStateData) == 24);

}
