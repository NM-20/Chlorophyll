#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864D18
   RuntimeId:        224E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A77
   VfTable:          0000000142352078
   Address (Base):   00000001430E78A0
*/
#pragma pack(push, 8)
class HashStringEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING StringIn; /* 0x0020 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0028 */
  FB_BOOLEAN TriggerOnStart; /* 0x0029 */
  FB_BOOLEAN AlwaysSend; /* 0x002A */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(HashStringEntityData) == 48);

}
