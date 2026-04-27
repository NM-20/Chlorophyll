#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428352C0
   RuntimeId:        02B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10AF
   VfTable:          00000001421EC508
   Address (Base):   0000000143119F50
*/
#pragma pack(push, 16)
class Vector3Provider_Constant : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Constant; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_Constant) == 32);

}
