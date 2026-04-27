#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832A48
   RuntimeId:        0098
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F36
   VfTable:          00000001421E2EE0
   Address (Base):   000000014311CDD0
*/
#pragma pack(push, 8)
class ATClampFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) Input; /* 0x0018 */
  FB_HANDLE(class ATFloatInput) Min; /* 0x0020 */
  FB_HANDLE(class ATFloatInput) Max; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATClampFunction) == 48);

}
