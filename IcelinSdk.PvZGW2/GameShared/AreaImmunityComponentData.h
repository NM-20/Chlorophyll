#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E868
   RuntimeId:        121B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA0
   VfTable:          0000000142272DB0
   Address (Base):   00000001430D65B0
*/
#pragma pack(push, 16)
class AreaImmunityComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ClearAreaImmunity; /* 0x0070 */
  char pad_0071[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(AreaImmunityComponentData) == 128);

}
