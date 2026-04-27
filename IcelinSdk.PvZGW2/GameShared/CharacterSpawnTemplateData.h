#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B7A8
   RuntimeId:        0F7F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0710
   VfTable:          0000000142268830
   Address (Base):   00000001430FCEB0
*/
#pragma pack(push, 8)
class CharacterSpawnTemplateData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizeCharacterData) CustomizeCharacterData; /* 0x0018 */
  FB_HANDLE(class GameBehaviourTemplateData) Behaviour; /* 0x0020 */
  FB_HANDLE(class AnimationSpawnTemplate) AnimationTemplate; /* 0x0028 */
  FB_REFARRAY(class VoiceOverLabel) VoiceOverLabels; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CharacterSpawnTemplateData) == 56);

}
