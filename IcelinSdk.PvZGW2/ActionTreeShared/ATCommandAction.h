#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATActionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832118
   RuntimeId:        0006
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F2A
   VfTable:          00000001421E3428
   Address (Base):   000000014311DFD0
*/
#pragma pack(push, 8)
class ATCommandAction : public ATActionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATCommandArrayInput) Begin; /* 0x0028 */
  FB_HANDLE(class ATCommandArrayInput) Update; /* 0x0030 */
  FB_HANDLE(class ATCommandArrayInput) End; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ATCommandAction) == 64);

}
