#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428652A0
   RuntimeId:        22A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C21
   VfTable:          00000001423516B8
   Address (Base):   00000001430E77E0
*/
#pragma pack(push, 8)
class PVZInterpolationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 TargetValue; /* 0x001C */
  FB_FLOAT32 StartingValue; /* 0x0020 */
  FB_FLOAT32 Speed; /* 0x0024 */
  FB_BOOLEAN AutoStart; /* 0x0028 */
  FB_BOOLEAN IsAngle; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZInterpolationEntityData) == 48);

}
