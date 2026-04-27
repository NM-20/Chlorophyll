#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>
#include <IcelinSdk.PvZGW2/Entity/SubRealm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A6E8
   RuntimeId:        07E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          097E
   VfTable:          000000014220C330
   Address (Base):   00000001430C01F0
*/
#pragma pack(push, 16)
class LogicReferenceObjectData : public ReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LocalPlayerId LocalPlayerId; /* 0x0090 */
  SubRealm SubRealm; /* 0x0094 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(LogicReferenceObjectData) == 160);

}
