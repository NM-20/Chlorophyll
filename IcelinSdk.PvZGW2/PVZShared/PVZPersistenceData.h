#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PersistenceData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428688F0
   RuntimeId:        2403
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07A7
   VfTable:          000000014234E930
   Address (Base):   0000000143107CB0
*/
#pragma pack(push, 8)
class PVZPersistenceData : public PersistenceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZPersistenceData) == 88);

}
