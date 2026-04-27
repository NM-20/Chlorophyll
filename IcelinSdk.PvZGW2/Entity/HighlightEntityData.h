#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BA38
   RuntimeId:        0910
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C9C
   VfTable:          000000014220AA90
   Address (Base):   00000001430F0BA0
*/
#pragma pack(push, 16)
class HighlightEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Color; /* 0x0020 */
  Vec2 TopLeft; /* 0x0030 */
  Vec2 BottomRight; /* 0x0038 */
  FB_UINT8 Alpha; /* 0x0040 */
  char pad_0041[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(HighlightEntityData) == 80);

}
