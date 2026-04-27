#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C4D8
   RuntimeId:        09BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11EF
   VfTable:          00000001422135E0
   Address (Base):   0000000143114D30
*/
#pragma pack(push, 8)
class WorldObjectListData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(WorldObjectListData) == 16);

}
