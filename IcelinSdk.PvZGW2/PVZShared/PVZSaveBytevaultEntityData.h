#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/BytevaultSaveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865200
   RuntimeId:        2299
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C8E
   VfTable:          0000000142351990
   Address (Base):   00000001430E63A0
*/
#pragma pack(push, 8)
class PVZSaveBytevaultEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BytevaultSaveTypes BytevaultCategory; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveBytevaultEntityData) == 32);

}
