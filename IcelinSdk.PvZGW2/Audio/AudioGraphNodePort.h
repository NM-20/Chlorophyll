#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835FE8
   RuntimeId:        037D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5D58
   Default Value:    0000000142BEBE00
*/
#pragma pack(push, 4)
struct AudioGraphNodePort
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 UnconnectedValue; /* 0x0000 */
  FB_UINT16 ValueIndex; /* 0x0004 */
  FB_BOOLEAN IsConnected; /* 0x0006 */
  char pad_0007[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphNodePort) == 8);

}
