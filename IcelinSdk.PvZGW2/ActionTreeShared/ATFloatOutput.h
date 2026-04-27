#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATOutputProperty.h>

namespace fb
{

/* TypeInfo (Array): 00000001428325D8
   RuntimeId:        0052
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          089E
   VfTable:          00000001421E3140
   Address (Base):   00000001430D80B0
*/
#pragma pack(push, 8)
class ATFloatOutput : public ATOutputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATFloatOutput) == 16);

}
