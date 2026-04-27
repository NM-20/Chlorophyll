#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428490E0
   RuntimeId:        0D50
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06CE
   VfTable:          00000001422604D8
   Address (Base):   00000001431147F0
*/
#pragma pack(push, 8)
class GameAISystem : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameAISystem) == 24);

}
