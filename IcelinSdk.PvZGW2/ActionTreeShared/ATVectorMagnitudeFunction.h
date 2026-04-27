#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832AA8
   RuntimeId:        009E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F3C
   VfTable:          00000001421E2E98
   Address (Base):   000000014311CCB0
*/
#pragma pack(push, 8)
class ATVectorMagnitudeFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATVectorInput) Vector; /* 0x0018 */
  FB_HANDLE(class ATFloatInput) Scale; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATVectorMagnitudeFunction) == 40);

}
