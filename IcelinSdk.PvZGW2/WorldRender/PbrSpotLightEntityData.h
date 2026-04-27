#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PbrAnalyticLightEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855B08
   RuntimeId:        1866
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B63
   VfTable:          00000001422BB980
   Address (Base):   00000001430E9B20
*/
#pragma pack(push, 16)
class PbrSpotLightEntityData : public PbrAnalyticLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DiscRadius; /* 0x00E0 */
  FB_FLOAT32 InnerAngle; /* 0x00E4 */
  FB_FLOAT32 OuterAngle; /* 0x00E8 */
  char pad_00EC[0x0004];
  FB_HANDLE(class IesProfileAsset) IESProfile; /* 0x00F0 */
  FB_FLOAT32 IESMultiplier; /* 0x00F8 */
  FB_BOOLEAN UseIESProfileAsMask; /* 0x00FC */
  char pad_00FD[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(PbrSpotLightEntityData) == 256);

}
