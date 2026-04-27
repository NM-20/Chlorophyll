#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428498A0
   RuntimeId:        0DCA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C20
   VfTable:          000000014225FA78
   Address (Base):   00000001430EE080
*/
#pragma pack(push, 8)
class InclusionSettingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING Setting; /* 0x0020 */
  FB_STDARRAY(FB_CSTRING) Settings; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(InclusionSettingEntityData) == 48);

}
