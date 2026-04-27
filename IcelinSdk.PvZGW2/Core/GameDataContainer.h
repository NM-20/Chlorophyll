#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833430
   RuntimeId:        00FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0963
   VfTable:          00000001421E5228
   Address (Base):   00000001430BF250
*/
#pragma pack(push, 8)
class GameDataContainer : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GameDataContainer) == 16);

}
