#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849440
   RuntimeId:        0D84
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C2D
   VfTable:          0000000142260128
   Address (Base):   00000001430EDEA0
*/
#pragma pack(push, 8)
class MovieEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MovieTextureAsset) Movie; /* 0x0018 */
  FB_FLOAT32 ExternalTime; /* 0x0020 */
  FB_UINT32 RenderableCount; /* 0x0024 */
  FB_UINT32 ThreadCount; /* 0x0028 */
  FB_BOOLEAN IsNormalMap; /* 0x002C */
  FB_BOOLEAN IsLooping; /* 0x002D */
  FB_BOOLEAN PreBuffer; /* 0x002E */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MovieEntityData) == 48);

}
