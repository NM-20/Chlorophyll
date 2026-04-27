#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BaseShapeData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B5E8
   RuntimeId:        08D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          096C
   VfTable:          000000014220AEA0
   Address (Base):   00000001430B7AC0
*/
#pragma pack(push, 16)
class OBBData : public BaseShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  LinearTransform Transform; /* 0x0020 */
  Vec3 HalfExtents; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(OBBData) == 112);

}
