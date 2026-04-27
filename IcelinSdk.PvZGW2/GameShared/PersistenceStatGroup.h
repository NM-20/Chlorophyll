#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A128
   RuntimeId:        0E48
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E48
   VfTable:          000000014225F578
   Address (Base):   0000000143113EF0
*/
#pragma pack(push, 8)
class PersistenceStatGroup : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING GroupName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PersistenceStatGroup) == 24);

}
