#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATVectorOutput.h>

namespace fb
{

/* TypeInfo (Array): 00000001428327D8
   RuntimeId:        0072
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          089D
   VfTable:          00000001421E3040
   Address (Base):   000000014311D250
*/
#pragma pack(push, 8)
class ATDirectionOutput : public ATVectorOutput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATDirectionOutput) == 16);

}
