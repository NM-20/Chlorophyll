#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZInteractionData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863A28
   RuntimeId:        213F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10FE
   VfTable:          0000000142353408
   Address (Base):   00000001430F84D0
*/
#pragma pack(push, 8)
class PVZInteractionEntityData : public PVZInteractionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZInteractionEntityData) == 40);

}
