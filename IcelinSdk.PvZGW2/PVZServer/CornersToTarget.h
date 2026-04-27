#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F1B8
   RuntimeId:        1D5F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1020
   VfTable:          000000014231DE18
   Address (Base):   000000014310B310
*/
#pragma pack(push, 8)
class CornersToTarget : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CompareType CompareType; /* 0x0010 */
  FB_INT32 Value; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CornersToTarget) == 24);

}
