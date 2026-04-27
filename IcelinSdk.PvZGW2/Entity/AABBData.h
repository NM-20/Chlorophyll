#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BaseShapeData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B5C8
   RuntimeId:        08D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          096B
   VfTable:          000000014220AF20
   Address (Base):   00000001430BE430
*/
#pragma pack(push, 16)
class AABBData : public BaseShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 Position; /* 0x0020 */
  Vec3 HalfExtents; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(AABBData) == 64);

}
