#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837B30
   RuntimeId:        0528
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA6
   VfTable:          00000001421F9D20
   Address (Base):   00000001430F2BE0
*/
#pragma pack(push, 8)
class SoundDataEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SoundDataAsset) DataAssets; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundDataEntityData) == 32);

}
