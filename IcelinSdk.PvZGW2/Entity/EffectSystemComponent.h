#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldDataComponent.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A468
   RuntimeId:        07C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          100D
   VfTable:          000000014220C4D0
   Address (Base):   00000001430FE050
*/
#pragma pack(push, 8)
class EffectSystemComponent : public SubWorldDataComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectParameterList) EffectParameterList; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EffectSystemComponent) == 24);

}
