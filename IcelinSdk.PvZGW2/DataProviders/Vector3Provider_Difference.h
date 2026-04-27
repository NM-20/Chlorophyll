#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835420
   RuntimeId:        02CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10A6
   VfTable:          00000001421EC400
   Address (Base):   0000000143119B30
*/
#pragma pack(push, 8)
class Vector3Provider_Difference : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Vector3Provider) A; /* 0x0010 */
  FB_HANDLE(class Vector3Provider) B; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Difference) == 32);

}
