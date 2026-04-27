#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATProperty.h>

namespace fb
{

/* TypeInfo (Array): 00000001428324D8
   RuntimeId:        0042
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08A3
   VfTable:          00000001421E31C0
   Address (Base):   00000001430F3720
*/
#pragma pack(push, 8)
class ATInputArrayProperty : public ATProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ATNode) ConnectedNodes; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ATInputArrayProperty) == 24);

}
