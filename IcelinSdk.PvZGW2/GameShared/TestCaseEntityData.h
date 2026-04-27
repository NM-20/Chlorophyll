#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BB90
   RuntimeId:        0FB6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE5
   VfTable:          0000000142268220
   Address (Base):   0000000143113170
*/
#pragma pack(push, 8)
class TestCaseEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 TimeOut; /* 0x001C */
  FB_CSTRING TestGroup; /* 0x0020 */
  FB_CSTRING Description; /* 0x0028 */
  FB_CSTRING TestCaseName; /* 0x0030 */
  FB_BOOLEAN Enabled; /* 0x0038 */
  FB_BOOLEAN Stable; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(TestCaseEntityData) == 64);

}
