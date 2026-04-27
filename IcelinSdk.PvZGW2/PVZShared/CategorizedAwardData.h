#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardActivationOrder.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B920
   RuntimeId:        2666
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8980
   Default Value:    000000014286B938
*/
#pragma pack(push, 8)
struct CategorizedAwardData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_REFARRAY(class AwardData) Awards; /* 0x0000 */
  FB_HANDLE(class StatsCategoryBaseData) Category; /* 0x0008 */
  FB_STDARRAY(struct CategorizedAwardData) Children; /* 0x0010 */
  AwardActivationOrder ActivationOrder; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CategorizedAwardData) == 32);

}
