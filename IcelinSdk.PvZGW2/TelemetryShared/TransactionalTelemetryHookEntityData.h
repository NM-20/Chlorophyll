#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874F90
   RuntimeId:        2CAB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A01
   VfTable:          000000014238CC10
   Address (Base):   00000001430D2CB0
*/
#pragma pack(push, 8)
class TransactionalTelemetryHookEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class TransactionalStreamData) Stream; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TransactionalTelemetryHookEntityData) == 40);

}
