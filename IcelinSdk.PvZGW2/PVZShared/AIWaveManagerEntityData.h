#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428736A8
   RuntimeId:        2BDA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C6A
   VfTable:          00000001423792B0
   Address (Base):   00000001430D2E90
*/
#pragma pack(push, 8)
class AIWaveManagerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING EntityName; /* 0x0020 */
  FB_CSTRING MonitoredWaveID; /* 0x0028 */
  FB_FLOAT32 KillPlayerDistance; /* 0x0030 */
  FB_BOOLEAN Enabled; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AIWaveManagerEntityData) == 56);

}
