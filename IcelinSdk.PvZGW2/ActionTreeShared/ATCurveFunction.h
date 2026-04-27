#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832968
   RuntimeId:        008A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F3E
   VfTable:          00000001421E2F70
   Address (Base):   000000014311D010
*/
#pragma pack(push, 8)
class ATCurveFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) Input; /* 0x0018 */
  FB_STDARRAY(struct Vec3) Curve; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATCurveFunction) == 40);

}
