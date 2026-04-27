#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/AimAssistCollisionBoneSnapAimData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E2A8
   RuntimeId:        11D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B4
   VfTable:          0000000142273328
   Address (Base):   0000000143111610
*/
#pragma pack(push, 8)
class AimAssistCollisionBoneData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 LengthScale; /* 0x0010 */
  AimAssistCollisionBoneSnapAimData SnapAim; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AimAssistCollisionBoneData) == 56);

}
