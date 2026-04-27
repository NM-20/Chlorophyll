#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/StaticModelEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B970
   RuntimeId:        0F94
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B2B
   VfTable:          00000001422685B0
   Address (Base):   00000001430D68B0
*/
#pragma pack(push, 16)
class InteractableStaticModelEntityData : public StaticModelEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(InteractableStaticModelEntityData) == 240);

}
