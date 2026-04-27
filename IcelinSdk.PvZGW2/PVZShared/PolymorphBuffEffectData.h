#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/PVZShared/OnPolymorphMaxHealthOptions.h>
#include <IcelinSdk.PvZGW2/PVZShared/OnPolymorphHealthOptions.h>
#include <IcelinSdk.PvZGW2/PVZShared/OnUnPolymorphHealthOptions.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CAC8
   RuntimeId:        274E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0919
   VfTable:          0000000142366440
   Address (Base):   00000001430F6610
*/
#pragma pack(push, 8)
class PolymorphBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PVZCharacterBlueprint) Character; /* 0x0018 */
  FB_HANDLE(class CharacterSpawnTemplateData) Template; /* 0x0020 */
  FB_FLOAT32 TimeAsPolymorph; /* 0x0028 */
  FB_FLOAT32 DamageTakenAsPolymorph; /* 0x002C */
  OnPolymorphMaxHealthOptions OnPolymorphMaxHealthOption; /* 0x0030 */
  OnPolymorphHealthOptions OnPolymorphHealthOption; /* 0x0034 */
  OnUnPolymorphHealthOptions OnUnPolymorphHealthOption; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PolymorphBuffEffectData) == 64);

}
