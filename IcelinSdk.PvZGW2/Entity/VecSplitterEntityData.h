#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B080
   RuntimeId:        0881
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A99
   VfTable:          000000014220B708
   Address (Base):   00000001430EFBE0
*/
#pragma pack(push, 16)
class VecSplitterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Vec3; /* 0x0020 */
  Vec4 Vec4; /* 0x0030 */
  Vec2 Vec2; /* 0x0040 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VecSplitterEntityData) == 80);

}
