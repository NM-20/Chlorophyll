#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFloatInput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832638
   RuntimeId:        0058
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08AB
   VfTable:          00000001421E3110
   Address (Base):   000000014311D730
*/
#pragma pack(push, 8)
class ATAngleInput : public ATFloatInput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATAngleInput) == 32);

}
