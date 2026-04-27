#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838E30
   RuntimeId:        063E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC0
   VfTable:          00000001421FC660
   Address (Base):   00000001430FE530
*/
#pragma pack(push, 16)
class ClothComponentData : public ComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ClothAssetInstance) Instances; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ClothComponentData) == 128);

}
