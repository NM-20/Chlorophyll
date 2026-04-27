#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428744A8
   RuntimeId:        2C54
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E01
   VfTable:          0000000142378918
   Address (Base):   0000000143104350
*/
#pragma pack(push, 8)
class AimerSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FreezeAimTime; /* 0x0010 */
  FB_FLOAT32 ForcedAimVectorX; /* 0x0014 */
  FB_FLOAT32 ForcedAimVectorY; /* 0x0018 */
  FB_FLOAT32 ForcedAimVectorZ; /* 0x001C */
  FB_BOOLEAN IsParabolic; /* 0x0020 */
  FB_BOOLEAN AimHigh; /* 0x0021 */
  FB_BOOLEAN AimAtGround; /* 0x0022 */
  FB_BOOLEAN FreezeAimPostFire; /* 0x0023 */
  FB_BOOLEAN FreezeAimWhileEquipped; /* 0x0024 */
  FB_BOOLEAN LeadShot; /* 0x0025 */
  FB_BOOLEAN UseForcedAimVector; /* 0x0026 */
  char pad_0027[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AimerSettings) == 40);

}
