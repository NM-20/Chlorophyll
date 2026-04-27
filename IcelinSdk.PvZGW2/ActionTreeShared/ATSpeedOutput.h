#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFloatOutput.h>

namespace fb
{

/* TypeInfo (Array): 00000001428326D8
   RuntimeId:        0062
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A0
   VfTable:          00000001421E30C0
   Address (Base):   000000014311D550
*/
#pragma pack(push, 8)
class ATSpeedOutput : public ATFloatOutput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATSpeedOutput) == 16);

}
