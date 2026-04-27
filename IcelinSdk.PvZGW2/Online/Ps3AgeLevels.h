#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858B90
   RuntimeId:        1A81
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B99C0
   Default Value:    0000000142BABA40
*/
#pragma pack(push, 4)
struct Ps3AgeLevels
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 AgeLevel7; /* 0x0000 */
  FB_INT32 AgeLevel8; /* 0x0004 */
  FB_INT32 AgeLevel9; /* 0x0008 */
  FB_INT32 AgeLevel10; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Ps3AgeLevels) == 16);

}
