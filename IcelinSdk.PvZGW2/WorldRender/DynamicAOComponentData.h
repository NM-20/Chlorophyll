#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855E28
   RuntimeId:        1898
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D83
   VfTable:          00000001422C5068
   Address (Base):   00000001430E9340
*/
#pragma pack(push, 16)
class DynamicAOComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 DynamicAOFactor; /* 0x0084 */
  FB_FLOAT32 SsaoFade; /* 0x0088 */
  FB_FLOAT32 SsaoRadius; /* 0x008C */
  FB_FLOAT32 SsaoMaxDistanceInner; /* 0x0090 */
  FB_FLOAT32 SsaoMaxDistanceOuter; /* 0x0094 */
  FB_FLOAT32 HbaoRadius; /* 0x0098 */
  FB_FLOAT32 HbaoAngleBias; /* 0x009C */
  FB_FLOAT32 HbaoAttenuation; /* 0x00A0 */
  FB_FLOAT32 HbaoContrast; /* 0x00A4 */
  FB_FLOAT32 HbaoMaxFootprintRadius; /* 0x00A8 */
  FB_FLOAT32 HbaoPowerExponent; /* 0x00AC */
  FB_BOOLEAN Enable; /* 0x00B0 */
  FB_BOOLEAN AffectOutdoorLight; /* 0x00B1 */
  FB_BOOLEAN AffectLocalLight; /* 0x00B2 */
  char pad_00B3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(DynamicAOComponentData) == 192);

}
