#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PlayerEntryComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CA08
   RuntimeId:        1082
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D8F
   VfTable:          0000000142267728
   Address (Base):   00000001430D0C80
*/
#pragma pack(push, 16)
class VehicleEntryComponentData : public PlayerEntryComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 NumberOfStances; /* 0x0120 */
  char pad_0124[0x0004];
  FB_HANDLE(class EntryComponentSoundData) EntryComponentSound; /* 0x0128 */
  FB_INT32 NumExitInputs; /* 0x0130 */
  FB_FLOAT32 DelayBeforeExit; /* 0x0134 */
  FB_BOOLEAN StancesEnabled; /* 0x0138 */
  char pad_0139[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(VehicleEntryComponentData) == 320);

}
