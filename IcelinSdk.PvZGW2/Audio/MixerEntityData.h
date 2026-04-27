#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428364F0
   RuntimeId:        03CB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B99
   VfTable:          00000001421F4BB8
   Address (Base):   00000001430F3000
*/
#pragma pack(push, 8)
class MixerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MixerAsset) Mixer; /* 0x0018 */
  FB_BOOLEAN ActivateOnCreation; /* 0x0020 */
  FB_BOOLEAN AccumulatedInputs; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MixerEntityData) == 40);

}
