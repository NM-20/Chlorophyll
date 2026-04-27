#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863CE8
   RuntimeId:        216B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D60
   VfTable:          0000000142352FA8
   Address (Base):   00000001430E6220
*/
#pragma pack(push, 16)
class BeamAnchorComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GameplayBones AnchorBone; /* 0x0070 */
  FB_FLOAT32 FallbackHeightOffset; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(BeamAnchorComponentData) == 128);

}
