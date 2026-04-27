#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871468
   RuntimeId:        2A55
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A07
   VfTable:          000000014236CAE8
   Address (Base):   00000001430E1B40
*/
#pragma pack(push, 8)
class UIPreviewBuildMarkerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec2 TargetSize; /* 0x0018 */
  Vec2 LayoutSize; /* 0x0020 */
  FB_FLOAT32 TimeBetweenJumps; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIPreviewBuildMarkerEntityData) == 48);

}
