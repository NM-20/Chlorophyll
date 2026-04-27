#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428706F8
   RuntimeId:        29AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B93
   VfTable:          000000014236D850
   Address (Base):   00000001430E29E0
*/
#pragma pack(push, 8)
class UILocalizeTimeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 Time; /* 0x001C */
  FB_BOOLEAN ShowHours; /* 0x0020 */
  FB_BOOLEAN ShowMinutes; /* 0x0021 */
  FB_BOOLEAN ShowSeconds; /* 0x0022 */
  FB_BOOLEAN ShowExtendedVersion; /* 0x0023 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UILocalizeTimeEntityData) == 40);

}
