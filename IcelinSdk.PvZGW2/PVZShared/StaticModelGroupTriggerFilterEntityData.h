#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D3D8
   RuntimeId:        27CB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C47
   VfTable:          0000000142365CB8
   Address (Base):   00000001430D3610
*/
#pragma pack(push, 8)
class StaticModelGroupTriggerFilterEntityData : public TriggerFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN InvertFilter; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StaticModelGroupTriggerFilterEntityData) == 32);

}
