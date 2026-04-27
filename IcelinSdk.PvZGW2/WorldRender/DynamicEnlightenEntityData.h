#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/EnlightenEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855798
   RuntimeId:        1842
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C76
   VfTable:          00000001422BBD68
   Address (Base):   00000001430E9FA0
*/
#pragma pack(push, 8)
class DynamicEnlightenEntityData : public EnlightenEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EnlightenDataAsset) EnlightenData; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DynamicEnlightenEntityData) == 48);

}
