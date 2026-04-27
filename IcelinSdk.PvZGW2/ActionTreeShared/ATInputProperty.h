#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832498
   RuntimeId:        003E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A6
   VfTable:          00000001421E31E0
   Address (Base):   00000001430CEBD0
*/
#pragma pack(push, 8)
class ATInputProperty : public ATProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATNode) ConnectedNode; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATInputProperty) == 24);

}
