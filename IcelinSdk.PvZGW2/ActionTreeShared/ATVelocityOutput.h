#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATVectorOutput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832758
   RuntimeId:        006A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          089C
   VfTable:          00000001421E3080
   Address (Base):   000000014311D3D0
*/
#pragma pack(push, 8)
class ATVelocityOutput : public ATVectorOutput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATVelocityOutput) == 16);

}
