#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428632E8
   RuntimeId:        210C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A7F
   VfTable:          0000000142353D68
   Address (Base):   00000001430D4C90
*/
#pragma pack(push, 8)
class PVZCommanderAbilityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ExecutionDuration; /* 0x0018 */
  FB_FLOAT32 GraceDuration; /* 0x001C */
  TeamId Team; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING IconID; /* 0x0028 */
  FB_BOOLEAN IsVisible; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderAbilityData) == 56);

}
