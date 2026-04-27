#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835300
   RuntimeId:        02BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10AD
   VfTable:          00000001421EC4D8
   Address (Base):   0000000143119E90
*/
#pragma pack(push, 8)
class Vector3Provider_Forward : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) Transform; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Forward) == 24);

}
