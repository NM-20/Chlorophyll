#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835360
   RuntimeId:        02C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10A7
   VfTable:          00000001421EC490
   Address (Base):   0000000143119D70
*/
#pragma pack(push, 8)
class Vector3Provider_Add : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class Vector3Provider) Vectors; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Add) == 24);

}
