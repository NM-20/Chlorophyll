#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850D00
   RuntimeId:        1404
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1140
   VfTable:          000000014227F8D8
   Address (Base):   00000001430EB3E0
*/
#pragma pack(push, 8)
class FakePhysicsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FakePhysicsData) ChildFakePhysics; /* 0x0010 */
  FB_FLOAT32 StartSpeed; /* 0x0018 */
  FB_FLOAT32 GravityModifier; /* 0x001C */
  FB_FLOAT32 StartDampening; /* 0x0020 */
  FB_FLOAT32 EndDampening; /* 0x0024 */
  FB_FLOAT32 MinSpeed; /* 0x0028 */
  FB_FLOAT32 MaxSpeed; /* 0x002C */
  FB_FLOAT32 Mass; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(FakePhysicsData) == 56);

}
