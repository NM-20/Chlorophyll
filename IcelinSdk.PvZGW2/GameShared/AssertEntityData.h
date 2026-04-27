#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BC50
   RuntimeId:        0FC2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C68
   VfTable:          0000000142268130
   Address (Base):   0000000143112F30
*/
#pragma pack(push, 8)
class AssertEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING Text; /* 0x0020 */
  FB_BOOLEAN Pass; /* 0x0028 */
  FB_BOOLEAN TriggerOnce; /* 0x0029 */
  FB_BOOLEAN TriggerOnPassChanged; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AssertEntityData) == 48);

}
