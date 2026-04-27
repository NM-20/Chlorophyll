#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857ED8
   RuntimeId:        19BA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9BA0
   Default Value:    0000000142857EF0
*/
#pragma pack(push, 8)
struct Ps4OnlineTitleData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING TitleId; /* 0x0000 */
  FB_CSTRING TitleSecret; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Ps4OnlineTitleData) == 16);

}
