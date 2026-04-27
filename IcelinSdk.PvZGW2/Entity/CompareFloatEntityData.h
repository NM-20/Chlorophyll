#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C210
   RuntimeId:        0994
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C59
   VfTable:          00000001422120D8
   Address (Base):   00000001430EEE60
*/
#pragma pack(push, 8)
class CompareFloatEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 A; /* 0x001C */
  FB_FLOAT32 B; /* 0x0020 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0024 */
  FB_BOOLEAN TriggerOnStart; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CompareFloatEntityData) == 40);

}
