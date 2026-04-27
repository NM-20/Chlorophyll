#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837AF0
   RuntimeId:        0524
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C2A
   VfTable:          00000001421F9D90
   Address (Base):   00000001430F2CA0
*/
#pragma pack(push, 16)
class SoundEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Sound; /* 0x0018 */
  LinearTransform Transform; /* 0x0020 */
  FB_BOOLEAN PlayOnCreation; /* 0x0060 */
  FB_BOOLEAN EnableOnCreation; /* 0x0061 */
  FB_BOOLEAN UseParentTransform; /* 0x0062 */
  char pad_0063[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(SoundEntityData) == 112);

}
