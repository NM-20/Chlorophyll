#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A108
   RuntimeId:        0E46
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E49
   VfTable:          000000014225F598
   Address (Base):   0000000143113F50
*/
#pragma pack(push, 8)
class PersistenceStatTable : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TableName; /* 0x0010 */
  FB_HANDLE(class AbstractPersistenceData) OwnerPersistenceData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PersistenceStatTable) == 32);

}
