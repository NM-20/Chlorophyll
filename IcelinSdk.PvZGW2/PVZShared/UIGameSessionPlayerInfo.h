#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870B00
   RuntimeId:        29E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FFA
   VfTable:          000000014236D0D0
   Address (Base):   00000001430D8FF0
*/
#pragma pack(push, 8)
class UIGameSessionPlayerInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING PlayerName; /* 0x0010 */
  FB_CSTRING Vanquishes; /* 0x0018 */
  FB_CSTRING Score; /* 0x0020 */
  FB_INT32 KicksCount; /* 0x0028 */
  FB_INT32 SpeakerStatus; /* 0x002C */
  FB_BOOLEAN IsReady; /* 0x0030 */
  FB_BOOLEAN IsHost; /* 0x0031 */
  FB_BOOLEAN IsHostMachine; /* 0x0032 */
  FB_BOOLEAN IsLocal; /* 0x0033 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIGameSessionPlayerInfo) == 56);

}
