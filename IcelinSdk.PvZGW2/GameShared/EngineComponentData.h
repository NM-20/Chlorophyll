#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CA48
   RuntimeId:        1086
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D58
   VfTable:          0000000142267658
   Address (Base):   00000001430D7090
*/
#pragma pack(push, 16)
class EngineComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EngineConfigData) Config; /* 0x0070 */
  FB_HANDLE(class SoundAsset) SoundEffect; /* 0x0078 */
  FB_HANDLE(class SoundAsset) SurfaceSoundEffect; /* 0x0080 */
  FB_BOOLEAN UseFirstPersonSounds; /* 0x0088 */
  char pad_0089[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(EngineComponentData) == 144);

}
