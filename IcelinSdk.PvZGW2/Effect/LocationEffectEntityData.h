#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ChildEffectEntityData.h>
#include <IcelinSdk.PvZGW2/Effect/LocationType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428392B0
   RuntimeId:        0683
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B91
   VfTable:          00000001421FE9D0
   Address (Base):   00000001430F2580
*/
#pragma pack(push, 16)
class LocationEffectEntityData : public ChildEffectEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocationType Location; /* 0x00A0 */
  FB_UINT32 CtrlPointIndex; /* 0x00A4 */
  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(LocationEffectEntityData) == 176);

}
