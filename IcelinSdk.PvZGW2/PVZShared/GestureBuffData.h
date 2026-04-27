#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CD48
   RuntimeId:        2776
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2EC8
   Default Value:    0000000142BB5490
*/
#pragma pack(push, 8)
struct GestureBuffData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class StatsCategoryBaseData) CharacterStatCategory; /* 0x0000 */
  FB_HANDLE(class StatsCategoryBaseData) AICharacterStatCategory; /* 0x0008 */
  FB_INT32 GestureIndex; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GestureBuffData) == 24);

}
