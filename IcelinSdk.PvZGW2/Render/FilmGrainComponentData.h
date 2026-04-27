#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852FE0
   RuntimeId:        1622
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D6B
   VfTable:          00000001422A1500
   Address (Base):   00000001430EA9C0
*/
#pragma pack(push, 16)
class FilmGrainComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ColorScale; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  Vec2 TextureScale; /* 0x0094 */
  char pad_009C[0x0004];
  FB_HANDLE(class TextureAsset) Texture; /* 0x00A0 */
  FB_BOOLEAN Enable; /* 0x00A8 */
  FB_BOOLEAN LinearFilteringEnable; /* 0x00A9 */
  FB_BOOLEAN RandomEnable; /* 0x00AA */
  char pad_00AB[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(FilmGrainComponentData) == 176);

}
