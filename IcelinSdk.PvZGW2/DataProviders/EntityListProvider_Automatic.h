#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityListProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834698
   RuntimeId:        01F6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1084
   VfTable:          00000001421ECDB0
   Address (Base):   000000014311BCF0
*/
#pragma pack(push, 8)
class EntityListProvider_Automatic : public EntityListProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DataContainerType; /* 0x0010 */
  FB_CSTRING Property; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EntityListProvider_Automatic) == 32);

}
