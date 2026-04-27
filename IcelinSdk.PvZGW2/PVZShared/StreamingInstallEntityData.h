#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865DC8
   RuntimeId:        234F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BBB
   VfTable:          0000000142350970
   Address (Base):   00000001430E58C0
*/
#pragma pack(push, 8)
class StreamingInstallEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(StreamingInstallEntityData) == 24);

}
