#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZInteractionData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863A48
   RuntimeId:        2141
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10FF
   VfTable:          0000000142353668
   Address (Base):   00000001430D3C10
*/
#pragma pack(push, 8)
class PVZSoldierManDownInteractionData : public PVZInteractionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ReviveTime; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZSoldierManDownInteractionData) == 48);

}
