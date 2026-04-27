#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldDataComponent.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838EB0
   RuntimeId:        0646
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          100E
   VfTable:          00000001421FC5F0
   Address (Base):   00000001431160B0
*/
#pragma pack(push, 8)
class ClothSystemComponent : public SubWorldDataComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QualityScalableFloat ActivationRadius; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ClothSystemComponent) == 32);

}
