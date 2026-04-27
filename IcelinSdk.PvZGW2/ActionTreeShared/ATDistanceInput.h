#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFloatInput.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832678
   RuntimeId:        005C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08AD
   VfTable:          00000001421E30F0
   Address (Base):   000000014311D670
*/
#pragma pack(push, 8)
class ATDistanceInput : public ATFloatInput
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATDistanceInput) == 32);

}
