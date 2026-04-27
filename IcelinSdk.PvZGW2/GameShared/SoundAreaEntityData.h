#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Audio/FadeCurveType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AAC0
   RuntimeId:        0ECD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD4
   VfTable:          00000001422638C8
   Address (Base):   00000001430ED720
*/
#pragma pack(push, 8)
class SoundAreaEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Sound; /* 0x0018 */
  FB_HANDLE(class BigWorldSettingsAsset) BigWorld; /* 0x0020 */
  FB_FLOAT32 PerimeterSize; /* 0x0028 */
  FB_FLOAT32 RelevanceMultiplier; /* 0x002C */
  FB_FLOAT32 MinRelevanceBudget; /* 0x0030 */
  FadeCurveType RelevanceFalloff; /* 0x0034 */
  FB_FLOAT32 Priority; /* 0x0038 */
  FB_BOOLEAN EnableOnCreation; /* 0x003C */
  FB_BOOLEAN UseLegacyBehavior; /* 0x003D */
  FB_BOOLEAN FaceListener; /* 0x003E */
  FB_BOOLEAN IgnoreVerticalPerimeter; /* 0x003F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SoundAreaEntityData) == 64);

}
