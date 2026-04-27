#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockValuePair.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C8E0
   RuntimeId:        1074
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F17
   VfTable:          00000001422677D8
   Address (Base):   00000001430DBDB0
*/
#pragma pack(push, 8)
class FloatUnlockValuePair : public UnlockValuePair
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DefaultValue; /* 0x0018 */
  FB_FLOAT32 UnlockedValue; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FloatUnlockValuePair) == 32);

}
