#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428596D8
   RuntimeId:        1B38
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09EB
   VfTable:          00000001422DC018
   Address (Base):   00000001430E88C0
*/
#pragma pack(push, 8)
class WeaponSplitterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class VoiceOverLabel) Weapons; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(WeaponSplitterEntityData) == 40);

}
