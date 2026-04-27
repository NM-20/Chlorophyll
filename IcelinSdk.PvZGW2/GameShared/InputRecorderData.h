#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BDD0
   RuntimeId:        0FD8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          060B
   VfTable:          0000000142268080
   Address (Base):   0000000143112CF0
*/
#pragma pack(push, 8)
class InputRecorderData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING FileNamePrefix; /* 0x0010 */
  FB_CSTRING FileName; /* 0x0018 */
  FB_INT32 ToggleRecordAction; /* 0x0020 */
  FB_BOOLEAN AutoIncrementFileName; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputRecorderData) == 40);

}
