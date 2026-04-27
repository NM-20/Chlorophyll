#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B9D0
   RuntimeId:        0F9A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A8D
   VfTable:          00000001422685E8
   Address (Base):   00000001430ED060
*/
#pragma pack(push, 8)
class SubLevelPreloadEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_CSTRING) SubLevelsToPreload; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SubLevelPreloadEntityData) == 40);

}
