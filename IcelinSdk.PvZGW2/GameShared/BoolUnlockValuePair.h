#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockValuePair.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C920
   RuntimeId:        1078
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F16
   VfTable:          0000000142267780
   Address (Base):   00000001430DBCF0
*/
#pragma pack(push, 8)
class BoolUnlockValuePair : public UnlockValuePair
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN DefaultValue; /* 0x0018 */
  FB_BOOLEAN UnlockedValue; /* 0x0019 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolUnlockValuePair) == 32);

}
