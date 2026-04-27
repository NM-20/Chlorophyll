#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C458
   RuntimeId:        09B2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0791
   VfTable:          00000001422136C8
   Address (Base):   00000001430EEB60
*/
#pragma pack(push, 8)
class WorldData : public SubWorldData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SubWorldDataComponent) Components; /* 0x0078 */
  FB_BOOLEAN IsProceduralLevel; /* 0x0080 */
  char pad_0081[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(WorldData) == 136);

}
