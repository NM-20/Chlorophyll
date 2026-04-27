#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F178
   RuntimeId:        1D5B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          101C
   VfTable:          000000014231DCD8
   Address (Base):   000000014310B3D0
*/
#pragma pack(push, 8)
class IsWaitingAtPathlink : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsWaitingAtPathlink) == 16);

}
