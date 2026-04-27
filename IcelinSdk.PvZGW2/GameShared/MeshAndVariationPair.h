#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ObjectBlueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C820
   RuntimeId:        1068
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0798
   VfTable:          0000000142267828
   Address (Base):   00000001430FCCD0
*/
#pragma pack(push, 8)
class MeshAndVariationPair : public ObjectBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) MeshAsset; /* 0x0048 */
  FB_HANDLE(class ObjectVariation) Variation; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(MeshAndVariationPair) == 88);

}
