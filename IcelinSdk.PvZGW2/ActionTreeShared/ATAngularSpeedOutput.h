#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFloatOutput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832718
   RuntimeId:        0066
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          089F
   VfTable:          00000001421E30A0
   Address (Base):   000000014311D490
*/
#pragma pack(push, 8)
class ATAngularSpeedOutput : public ATFloatOutput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATAngularSpeedOutput) == 16);

}
