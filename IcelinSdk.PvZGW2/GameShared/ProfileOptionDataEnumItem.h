#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A368
   RuntimeId:        0E68
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9608
   Default Value:    000000014284A380
*/
#pragma pack(push, 8)
struct ProfileOptionDataEnumItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING DisplayName; /* 0x0000 */
  FB_BOOLEAN Default; /* 0x0008 */
  char pad_0009[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ProfileOptionDataEnumItem) == 16);

}
