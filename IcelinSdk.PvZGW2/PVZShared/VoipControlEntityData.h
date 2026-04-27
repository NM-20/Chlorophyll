#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FD48
   RuntimeId:        2936
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0993
   VfTable:          000000014236DEE0
   Address (Base):   00000001430E1D20
*/
#pragma pack(push, 8)
class VoipControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoipControlEntityData) == 24);

}
