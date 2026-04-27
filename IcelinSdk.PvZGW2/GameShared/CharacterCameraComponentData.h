#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterCameraForwardAxis.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DD20
   RuntimeId:        1183
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D35
   VfTable:          0000000142273860
   Address (Base):   00000001430CE750
*/
#pragma pack(push, 16)
class CharacterCameraComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TargetCameraData) Cameras; /* 0x0070 */
  CharacterCameraForwardAxis CameraForwardAxis; /* 0x0078 */
  char pad_007C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterCameraComponentData) == 128);

}
