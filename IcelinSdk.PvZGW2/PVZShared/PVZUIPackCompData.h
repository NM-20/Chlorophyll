#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870098
   RuntimeId:        2961
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0759
   VfTable:          000000014236DC10
   Address (Base):   00000001430BF6B0
*/
#pragma pack(push, 8)
class PVZUIPackCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TextureAsset) PackTextures; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZUIPackCompData) == 56);

}
