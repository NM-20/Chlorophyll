#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DDA0
   RuntimeId:        118B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D4D
   VfTable:          0000000142273820
   Address (Base):   00000001430D62B0
*/
#pragma pack(push, 16)
class AntInputComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(AntInputComponentData) == 112);

}
