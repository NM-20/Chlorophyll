#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Audio/FadeCurveType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837B90
   RuntimeId:        052E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C24
   VfTable:          00000001421F9C78
   Address (Base):   00000001430F2AC0
*/
#pragma pack(push, 8)
class IrReverbEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ImpulseResponseAsset) ImpulseResponse; /* 0x0018 */
  FB_FLOAT32 Gain; /* 0x0020 */
  FB_FLOAT32 Volume; /* 0x0024 */
  FadeCurveType FadeCurve; /* 0x0028 */
  FB_BOOLEAN IsDominant; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(IrReverbEntityData) == 48);

}
