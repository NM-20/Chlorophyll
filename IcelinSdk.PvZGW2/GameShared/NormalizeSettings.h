#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CFA0
   RuntimeId:        10CC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAE20
   Default Value:    000000014284CFB8
*/
#pragma pack(push, 4)
struct NormalizeSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Minimum; /* 0x0000 */
  FB_FLOAT32 Maximum; /* 0x0004 */
  FB_FLOAT32 Lower; /* 0x0008 */
  FB_FLOAT32 Upper; /* 0x000C */
  FB_FLOAT32 Velocity; /* 0x0010 */
  FB_BOOLEAN Normalize; /* 0x0014 */
  char pad_0015[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NormalizeSettings) == 24);

}
