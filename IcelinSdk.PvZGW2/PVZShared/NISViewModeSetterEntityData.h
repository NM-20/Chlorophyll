#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428714A8
   RuntimeId:        2A59
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F7
   VfTable:          000000014236C970
   Address (Base):   00000001430E2680
*/
#pragma pack(push, 8)
class NISViewModeSetterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN SetOnPropertyChanged; /* 0x0018 */
  FB_BOOLEAN IsNISViewMode; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NISViewModeSetterEntityData) == 32);

}
