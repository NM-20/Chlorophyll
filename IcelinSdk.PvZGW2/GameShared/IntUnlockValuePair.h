#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockValuePair.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C900
   RuntimeId:        1076
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F15
   VfTable:          00000001422677C8
   Address (Base):   00000001430DBD50
*/
#pragma pack(push, 8)
class IntUnlockValuePair : public UnlockValuePair
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 DefaultValue; /* 0x0018 */
  FB_INT32 UnlockedValue; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IntUnlockValuePair) == 32);

}
