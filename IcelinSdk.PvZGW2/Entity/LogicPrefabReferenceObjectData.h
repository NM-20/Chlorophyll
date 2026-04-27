#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LogicReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A748
   RuntimeId:        07EF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0981
   VfTable:          000000014220C270
   Address (Base):   00000001430DC8F0
*/
#pragma pack(push, 16)
class LogicPrefabReferenceObjectData : public LogicReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(LogicPrefabReferenceObjectData) == 160);

}
