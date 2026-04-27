#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/VFXLocationControl.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849998
   RuntimeId:        0DD4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A06
   VfTable:          000000014225F9A8
   Address (Base):   00000001430EDF00
*/
#pragma pack(push, 16)
class PlayVFXEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) VisualEffect; /* 0x0018 */
  VFXLocationControl EffectLocation; /* 0x0020 */
  VFXLocationControl LocationA; /* 0x0070 */
  VFXLocationControl LocationB; /* 0x00C0 */
  VFXLocationControl LocationC; /* 0x0110 */
  LinearTransform RawTransformEffectLocation; /* 0x0160 */
  LinearTransform RawTransformLocationA; /* 0x01A0 */
  LinearTransform RawTransformLocationB; /* 0x01E0 */
  LinearTransform RawTransformLocationC; /* 0x0220 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0260 */
#pragma pack(pop)

static_assert(sizeof(PlayVFXEntityData) == 608);

}
