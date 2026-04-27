#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATVectorInput.h>

namespace fb
{

/* TypeInfo (Array): 00000001428327B8
   RuntimeId:        0070
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B2
   VfTable:          00000001421E3050
   Address (Base):   000000014311D2B0
*/
#pragma pack(push, 16)
class ATDirectionInput : public ATVectorInput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATDirectionInput) == 48);

}
