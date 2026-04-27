#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428353C0
   RuntimeId:        02C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B1
   VfTable:          00000001421EC448
   Address (Base):   0000000143119C50
*/
#pragma pack(push, 8)
class Vector3Provider_Normalize : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Vector3Provider) Vector; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Normalize) == 24);

}
