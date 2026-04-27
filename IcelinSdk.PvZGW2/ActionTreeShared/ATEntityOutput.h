#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATOutputProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832858
   RuntimeId:        007A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0899
   VfTable:          00000001421E3000
   Address (Base):   000000014311D0D0
*/
#pragma pack(push, 8)
class ATEntityOutput : public ATOutputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATEntityOutput) == 16);

}
