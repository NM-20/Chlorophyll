#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATStateBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832928
   RuntimeId:        0086
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F55
   VfTable:          00000001421E2F98
   Address (Base):   00000001430F34E0
*/
#pragma pack(push, 8)
class ATState : public ATStateBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ATState) == 72);

}
