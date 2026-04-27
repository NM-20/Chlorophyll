#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PbrAnalyticLightEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855AE8
   RuntimeId:        1864
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B62
   VfTable:          00000001422BBA60
   Address (Base):   00000001430E9B80
*/
#pragma pack(push, 16)
class PbrSphereLightEntityData : public PbrAnalyticLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SphereRadius; /* 0x00E0 */
  char pad_00E4[0x0004];
  FB_HANDLE(class IesProfileAsset) IESProfile; /* 0x00E8 */
  FB_FLOAT32 IESMultiplier; /* 0x00F0 */
  FB_BOOLEAN OnlyHempishere; /* 0x00F4 */
  FB_BOOLEAN UseIESProfileAsMask; /* 0x00F5 */
  char pad_00F6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(PbrSphereLightEntityData) == 256);

}
