#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Blueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FD58
   RuntimeId:        1349
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A4
   VfTable:          0000000142277030
   Address (Base):   0000000143110110
*/
#pragma pack(push, 8)
class MorphTargetsTextureBlueprint : public Blueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) Texture; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MorphTargetsTextureBlueprint) == 72);

}
