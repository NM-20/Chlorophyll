#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A8E8
   RuntimeId:        0809
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AFA
   VfTable:          000000014220C1A0
   Address (Base):   00000001430B45D0
*/
#pragma pack(push, 16)
class SpatialEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  LinearTransform Transform; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(SpatialEntityData) == 96);

}
