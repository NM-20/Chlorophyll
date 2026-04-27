#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ChildEffectEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837AD0
   RuntimeId:        0522
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B8D
   VfTable:          00000001421F9DC8
   Address (Base):   00000001430CEB10
*/
#pragma pack(push, 16)
class SoundEffectEntityData : public ChildEffectEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) Sound; /* 0x00A0 */
  FB_BOOLEAN UseDefaultStopEvent; /* 0x00A8 */
  char pad_00A9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(SoundEffectEntityData) == 176);

}
