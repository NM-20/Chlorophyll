#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/EnlightenEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428557B8
   RuntimeId:        1844
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C77
   VfTable:          00000001422BBDA0
   Address (Base):   00000001430E9F40
*/
#pragma pack(push, 8)
class StaticEnlightenEntityData : public EnlightenEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class StaticEnlightenData) EnlightenData; /* 0x0028 */
  FB_HANDLE(class EnlightenDataAsset) DynamicEnlightenData; /* 0x0030 */
  FB_HANDLE(class ObjectBlueprint) VisualEnvironment; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(StaticEnlightenEntityData) == 64);

}
