#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIMarkerType.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870578
   RuntimeId:        2995
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B4C
   VfTable:          000000014236DA70
   Address (Base):   00000001430E2D40
*/
#pragma pack(push, 16)
class PVZUIMarkerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZUIMarkerType MarkerType; /* 0x0060 */
  FB_INT32 UniqueID; /* 0x0064 */
  FB_CSTRING CoopLabel; /* 0x0068 */
  FB_HANDLE(class TextureAsset) Icon; /* 0x0070 */
  FB_REFARRAY(class CharacterCustomizationAsset) AllowableCustomizations; /* 0x0078 */
  FB_INT32 VisibleRadius; /* 0x0080 */
  Vec2 ArrowPixelOffset; /* 0x0084 */
  FB_BOOLEAN Enabled; /* 0x008C */
  char pad_008D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZUIMarkerEntityData) == 144);

}
