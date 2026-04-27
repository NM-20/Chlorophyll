#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFloatOutput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832698
   RuntimeId:        005E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A1
   VfTable:          00000001421E30E0
   Address (Base):   000000014311D610
*/
#pragma pack(push, 8)
class ATDistanceOutput : public ATFloatOutput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATDistanceOutput) == 16);

}
