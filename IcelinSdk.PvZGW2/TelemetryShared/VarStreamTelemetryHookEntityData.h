#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874F70
   RuntimeId:        2CA9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A46
   VfTable:          000000014238CB50
   Address (Base):   00000001430D2D10
*/
#pragma pack(push, 8)
class VarStreamTelemetryHookEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING mod; /* 0x0020 */
  FB_CSTRING grp; /* 0x0028 */
  FB_CSTRING subgrp; /* 0x0030 */
  FB_HANDLE(class VarEventStreamData) Stream; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VarStreamTelemetryHookEntityData) == 64);

}
