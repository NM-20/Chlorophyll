#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832988
   RuntimeId:        008C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F37
   VfTable:          00000001421E2F58
   Address (Base):   000000014311CFB0
*/
#pragma pack(push, 8)
class ATVectorFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATFloatInput) X; /* 0x0018 */
  FB_HANDLE(class ATFloatInput) Y; /* 0x0020 */
  FB_HANDLE(class ATFloatInput) Z; /* 0x0028 */
  FB_BOOLEAN Normalize; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ATVectorFunction) == 56);

}
