#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835400
   RuntimeId:        02CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B2
   VfTable:          00000001421EC418
   Address (Base):   0000000143119B90
*/
#pragma pack(push, 8)
class Vector3Provider_EntityVelocity : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_EntityVelocity) == 24);

}
