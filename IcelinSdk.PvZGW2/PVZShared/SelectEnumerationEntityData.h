#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865C78
   RuntimeId:        233D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A6D
   VfTable:          0000000142350A80
   Address (Base):   00000001430E7CC0
*/
#pragma pack(push, 8)
class SelectEnumerationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class PVZEnumerationAsset) PVZEnumerationAsset; /* 0x0020 */
  FB_UINT32 InValue; /* 0x0028 */
  FB_BOOLEAN TriggerEventOnValueChanged; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SelectEnumerationEntityData) == 48);

}
