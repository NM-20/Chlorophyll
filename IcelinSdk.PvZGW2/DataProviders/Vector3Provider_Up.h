#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835340
   RuntimeId:        02BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10AE
   VfTable:          00000001421EC4A8
   Address (Base):   0000000143119DD0
*/
#pragma pack(push, 8)
class Vector3Provider_Up : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) Transform; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Up) == 24);

}
