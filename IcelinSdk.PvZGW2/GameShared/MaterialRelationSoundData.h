#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849B08
   RuntimeId:        0DEA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1165
   VfTable:          000000014225F8E0
   Address (Base):   00000001430FD2D0
*/
#pragma pack(push, 8)
class MaterialRelationSoundData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) ImpactSound; /* 0x0010 */
  FB_HANDLE(class AudioGraphEvent) ImpactSoundEvent; /* 0x0018 */
  FB_HANDLE(class SoundAsset) ScrapeSound; /* 0x0020 */
  FB_FLOAT32 ScrapeLength; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationSoundData) == 48);

}
