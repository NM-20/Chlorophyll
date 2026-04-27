#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F730
   RuntimeId:        12E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          113A
   VfTable:          00000001422764F8
   Address (Base):   0000000143110830
*/
#pragma pack(push, 8)
class BoneFakePhysicsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FakePhysicsData) FakePhysics; /* 0x0010 */
  FB_CSTRING BoneName; /* 0x0018 */
  FB_INT32 BoneId; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BoneFakePhysicsData) == 40);

}
