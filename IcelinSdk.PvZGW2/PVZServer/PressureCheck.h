#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZServer/PressureCheckType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EFD8
   RuntimeId:        1D41
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1046
   VfTable:          000000014231DE78
   Address (Base):   000000014310B8B0
*/
#pragma pack(push, 8)
class PressureCheck : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PressureCheckType CheckType; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PressureCheck) == 24);

}
