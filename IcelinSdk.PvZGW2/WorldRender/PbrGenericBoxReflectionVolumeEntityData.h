#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PbrReflectionVolumeEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855B88
   RuntimeId:        186E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B45
   VfTable:          00000001422BB910
   Address (Base):   00000001430E99A0
*/
#pragma pack(push, 16)
class PbrGenericBoxReflectionVolumeEntityData : public PbrReflectionVolumeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 LocalOffset; /* 0x0090 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PbrGenericBoxReflectionVolumeEntityData) == 160);

}
