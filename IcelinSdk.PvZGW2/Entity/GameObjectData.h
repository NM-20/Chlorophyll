#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataBusPeer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A888
   RuntimeId:        0803
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0969
   VfTable:          000000014220C1D8
   Address (Base):   00000001430B6EB0
*/
#pragma pack(push, 8)
class GameObjectData : public DataBusPeer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameObjectData) == 24);

}
