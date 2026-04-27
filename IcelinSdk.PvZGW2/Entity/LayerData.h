#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/WorldPartData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C3F8
   RuntimeId:        09AC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          078E
   VfTable:          0000000142213708
   Address (Base):   0000000143114D90
*/
#pragma pack(push, 8)
class LayerData : public WorldPartData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(LayerData) == 104);

}
