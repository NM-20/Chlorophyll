#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUILegalDocType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871448
   RuntimeId:        2A53
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09CB
   VfTable:          000000014236CB20
   Address (Base):   00000001430E27A0
*/
#pragma pack(push, 8)
class PVZUIGetLegalDocEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZUILegalDocType LegalDocType; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZUIGetLegalDocEntityData) == 32);

}
