#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFloatInput.h>

namespace fb
{

/* TypeInfo (Array): 00000001428326B8
   RuntimeId:        0060
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08AA
   VfTable:          00000001421E30D0
   Address (Base):   000000014311D5B0
*/
#pragma pack(push, 8)
class ATSpeedInput : public ATFloatInput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATSpeedInput) == 32);

}
