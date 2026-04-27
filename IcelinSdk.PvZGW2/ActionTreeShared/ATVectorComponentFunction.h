#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATVectorComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832AE8
   RuntimeId:        00A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F3F
   VfTable:          00000001421E2E68
   Address (Base):   000000014311CBF0
*/
#pragma pack(push, 8)
class ATVectorComponentFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATVectorInput) Vector; /* 0x0018 */
  ATVectorComponent Component; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATVectorComponentFunction) == 40);

}
