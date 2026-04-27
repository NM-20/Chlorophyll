#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Blueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A628
   RuntimeId:        07DD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A2
   VfTable:          000000014220C418
   Address (Base):   0000000143115450
*/
#pragma pack(push, 8)
class DataContainerCollectionBlueprint : public Blueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DataContainer) DataContainers; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(DataContainerCollectionBlueprint) == 72);

}
