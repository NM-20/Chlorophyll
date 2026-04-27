#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428353A0
   RuntimeId:        02C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B0
   VfTable:          00000001421EC460
   Address (Base):   0000000143119CB0
*/
#pragma pack(push, 8)
class Vector3Provider_Scale : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Vector3Provider) Vector; /* 0x0010 */
  FB_HANDLE(class FloatProvider) Scalar; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Scale) == 32);

}
