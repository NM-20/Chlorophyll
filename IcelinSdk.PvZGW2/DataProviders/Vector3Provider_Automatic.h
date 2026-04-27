#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834658
   RuntimeId:        01F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B4
   VfTable:          00000001421ECDF0
   Address (Base):   000000014311BDB0
*/
#pragma pack(push, 8)
class Vector3Provider_Automatic : public Vector3Provider
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

static_assert(sizeof(Vector3Provider_Automatic) == 32);

}
