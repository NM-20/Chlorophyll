#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B240
   RuntimeId:        089D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C09
   VfTable:          000000014220B3C0
   Address (Base):   00000001430EF700
*/
#pragma pack(push, 8)
class SwitchPropertyStringEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) StringProperties; /* 0x0018 */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SwitchPropertyStringEntityData) == 40);

}
