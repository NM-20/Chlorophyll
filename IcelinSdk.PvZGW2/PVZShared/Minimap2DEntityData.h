#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865010
   RuntimeId:        227C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          099F
   VfTable:          0000000142351A38
   Address (Base):   00000001430E5140
*/
#pragma pack(push, 8)
class Minimap2DEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Tag; /* 0x0018 */
  FB_UINT32 Layer; /* 0x0020 */
  FB_UINT32 OutputSize; /* 0x0024 */
  FB_UINT32 OutputResolution; /* 0x0028 */
  FB_UINT32 MaxActiveTiles; /* 0x002C */
  FB_HANDLE(class Minimap2DTextureAsset) Minimap2DTextureAsset; /* 0x0030 */
  FB_BOOLEAN Visible; /* 0x0038 */
  FB_BOOLEAN IsPatch; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(Minimap2DEntityData) == 64);

}
