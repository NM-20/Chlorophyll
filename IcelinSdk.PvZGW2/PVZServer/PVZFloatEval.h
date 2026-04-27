#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EC18
   RuntimeId:        1D05
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1031
   VfTable:          000000014231E3A0
   Address (Base):   000000014310C3F0
*/
#pragma pack(push, 8)
class PVZFloatEval : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Condition; /* 0x0010 */
  CompareType CompareType; /* 0x0018 */
  FB_FLOAT32 Value; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZFloatEval) == 32);

}
