#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AC28
   RuntimeId:        0EDD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B3B
   VfTable:          00000001422633E8
   Address (Base):   00000001430FD030
*/
#pragma pack(push, 16)
class InteractionEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 UseWithinRadius; /* 0x0060 */
  FB_FLOAT32 UseWithinAngle; /* 0x0064 */
  FB_UINT32 MaxUses; /* 0x0068 */
  FB_FLOAT32 DisplayWithinRadius; /* 0x006C */
  FB_HANDLE(class SoundAsset) PreInteractionSoundEffect; /* 0x0070 */
  FB_BOOLEAN TestIfOccluded; /* 0x0078 */
  FB_BOOLEAN AllowInteractionViaRemoteEntry; /* 0x0079 */
  FB_BOOLEAN UseDisplayWithinRadius; /* 0x007A */
  FB_BOOLEAN Enabled; /* 0x007B */
  char pad_007C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(InteractionEntityData) == 128);

}
