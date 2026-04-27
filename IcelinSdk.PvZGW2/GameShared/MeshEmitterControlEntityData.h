#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849BC8
   RuntimeId:        0DF6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09E0
   VfTable:          000000014225F808
   Address (Base):   00000001430EDA80
*/
#pragma pack(push, 8)
class MeshEmitterControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshEmitterAsset) MeshEmitter; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MeshEmitterControlEntityData) == 32);

}
