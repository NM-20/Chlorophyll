#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/OriginalLocalLightEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855A48
   RuntimeId:        185A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B65
   VfTable:          00000001422BBBB0
   Address (Base):   00000001430E9CA0
*/
#pragma pack(push, 16)
class PointLightEntityData : public OriginalLocalLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Width; /* 0x00C0 */
  FB_FLOAT32 TranslucencyAmbient; /* 0x00C4 */
  FB_FLOAT32 TranslucencyScale; /* 0x00C8 */
  FB_FLOAT32 TranslucencyPower; /* 0x00CC */
  FB_FLOAT32 TranslucencyDistortion; /* 0x00D0 */
  char pad_00D4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(PointLightEntityData) == 224);

}
