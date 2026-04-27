#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AD80
   RuntimeId:        0851
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BFE
   VfTable:          000000014220BC10
   Address (Base):   00000001430F0480
*/
#pragma pack(push, 8)
class EventOrderGateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_UINT32 EventCount; /* 0x001C */
  FB_STDARRAY(FB_UINT32) EventCountdowns; /* 0x0020 */
  FB_STDARRAY(FB_INT32) SourceHashes; /* 0x0028 */
  FB_BOOLEAN Enabled; /* 0x0030 */
  FB_BOOLEAN DisableOnOpen; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(EventOrderGateEntityData) == 56);

}
