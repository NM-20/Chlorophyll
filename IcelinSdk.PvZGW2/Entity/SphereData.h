#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BaseShapeData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B5A8
   RuntimeId:        08D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          097C
   VfTable:          000000014220AFA0
   Address (Base):   00000001430BE490
*/
#pragma pack(push, 16)
class SphereData : public BaseShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Position; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SphereData) == 48);

}
