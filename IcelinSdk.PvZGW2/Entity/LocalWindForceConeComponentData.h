#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceComponentBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BC18
   RuntimeId:        093A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D4F
   VfTable:          00000001422124B8
   Address (Base):   00000001430EF160
*/
#pragma pack(push, 16)
class LocalWindForceConeComponentData : public LocalWindForceComponentBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InnerRadius; /* 0x0090 */
  FB_FLOAT32 OuterRadius; /* 0x0094 */
  FB_FLOAT32 ConeInnerAngle; /* 0x0098 */
  FB_FLOAT32 ConeOuterAngle; /* 0x009C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceConeComponentData) == 160);

}
