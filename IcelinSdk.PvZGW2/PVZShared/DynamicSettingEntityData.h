#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864CD8
   RuntimeId:        224A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC7
   VfTable:          0000000142351E38
   Address (Base):   00000001430E7F00
*/
#pragma pack(push, 8)
class DynamicSettingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING BoolSettingName; /* 0x0020 */
  FB_CSTRING IntSettingName; /* 0x0028 */
  FB_CSTRING UIntSettingName; /* 0x0030 */
  FB_CSTRING FloatSettingName; /* 0x0038 */
  FB_CSTRING StringSettingName; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(DynamicSettingEntityData) == 72);

}
