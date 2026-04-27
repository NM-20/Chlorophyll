#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C230
   RuntimeId:        0996
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C55
   VfTable:          0000000142212068
   Address (Base):   00000001430EEE00
*/
#pragma pack(push, 8)
class CompareStringEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING A; /* 0x0020 */
  FB_CSTRING B; /* 0x0028 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0030 */
  FB_BOOLEAN TriggerOnStart; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CompareStringEntityData) == 56);

}
