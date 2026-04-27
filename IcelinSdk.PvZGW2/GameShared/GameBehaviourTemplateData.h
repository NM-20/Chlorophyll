#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B768
   RuntimeId:        0F7B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07AE
   VfTable:          0000000142268820
   Address (Base):   00000001430FCF10
*/
#pragma pack(push, 8)
class GameBehaviourTemplateData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameBehaviourTemplateData) == 24);

}
