#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B418
   RuntimeId:        08B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A09
   VfTable:          000000014220B180
   Address (Base):   00000001430D7DB0
*/
#pragma pack(push, 8)
class SettingEntityData : public EntityData
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
  FB_INT32 IntSetting; /* 0x0048 */
  FB_FLOAT32 FloatSetting; /* 0x004C */
  FB_UINT32 UIntSetting; /* 0x0050 */
  char pad_0054[0x0004];
  FB_CSTRING StringSetting; /* 0x0058 */
  FB_INT32 ClientIntSetting; /* 0x0060 */
  FB_FLOAT32 ClientFloatSetting; /* 0x0064 */
  FB_UINT32 ClientUIntSetting; /* 0x0068 */
  char pad_006C[0x0004];
  FB_CSTRING ClientStringSetting; /* 0x0070 */
  FB_BOOLEAN BoolSetting; /* 0x0078 */
  FB_BOOLEAN ClientBoolSetting; /* 0x0079 */
  FB_BOOLEAN SetOnPropertyChanged; /* 0x007A */
  FB_BOOLEAN SetFromClientOnPropertyChanged; /* 0x007B */
  FB_BOOLEAN SetOnInit; /* 0x007C */
  FB_BOOLEAN ReSyncSettingsOnChanged; /* 0x007D */
  char pad_007E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(SettingEntityData) == 128);

}
