#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428352E0
   RuntimeId:        02B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10A9
   VfTable:          00000001421EC4F0
   Address (Base):   0000000143119EF0
*/
#pragma pack(push, 8)
class Vector3Provider_Translation : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) Transform; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Translation) == 24);

}
