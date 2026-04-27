#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/EntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428346B8
   RuntimeId:        01F8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1091
   VfTable:          00000001421ECD88
   Address (Base):   000000014311BC90
*/
#pragma pack(push, 8)
class EntityProvider_Automatic : public EntityProvider
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

static_assert(sizeof(EntityProvider_Automatic) == 32);

}
