#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BulletEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869608
   RuntimeId:        24AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B14
   VfTable:          0000000142355C18
   Address (Base):   00000001430D3970
*/
#pragma pack(push, 16)
class ProximityBulletEntityData : public BulletEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ProximityRadius; /* 0x01C0 */
  FB_FLOAT32 ArmingTime; /* 0x01C4 */
  FB_FLOAT32 TriggeringTime; /* 0x01C8 */
  char pad_01CC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01D0 */
#pragma pack(pop)

static_assert(sizeof(ProximityBulletEntityData) == 464);

}
