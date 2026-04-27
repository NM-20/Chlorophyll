#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/CompareType.h>
#include <IcelinSdk.PvZGW2/PVZShared/ETacticType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F058
   RuntimeId:        1D49
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1025
   VfTable:          000000014231DF78
   Address (Base):   000000014310B730
*/
#pragma pack(push, 8)
class IsTactic : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CompareType CompareType; /* 0x0010 */
  ETacticType Value; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(IsTactic) == 24);

}
