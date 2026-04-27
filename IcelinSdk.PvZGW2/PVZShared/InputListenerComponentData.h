#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863988
   RuntimeId:        2135
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D43
   VfTable:          00000001423534A8
   Address (Base):   00000001430E6A60
*/
#pragma pack(push, 16)
class InputListenerComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(InputListenerComponentData) == 112);

}
