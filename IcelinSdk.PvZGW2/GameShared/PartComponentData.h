#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E028
   RuntimeId:        11AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DBD
   VfTable:          00000001422734D0
   Address (Base):   00000001430BEEF0
*/
#pragma pack(push, 16)
class PartComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class HealthStateData) HealthStates; /* 0x0070 */
  FB_REFARRAY(class PartLinkData) PartLinks; /* 0x0078 */
  FB_FLOAT32 DamageOverride; /* 0x0080 */
  FB_INT32 SetHealthState; /* 0x0084 */
  FB_BOOLEAN IsSupported; /* 0x0088 */
  FB_BOOLEAN IsFragile; /* 0x0089 */
  FB_BOOLEAN IsNetworkable; /* 0x008A */
  FB_BOOLEAN IsWindow; /* 0x008B */
  FB_BOOLEAN AnimatePhysics; /* 0x008C */
  char pad_008D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PartComponentData) == 144);

}
