#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428709E8
   RuntimeId:        29D7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A44
   VfTable:          000000014236D4A8
   Address (Base):   00000001430E3D00
*/
#pragma pack(push, 8)
class UIFirstPartyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIFirstPartyEntityData) == 24);

}
