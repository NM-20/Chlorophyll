#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B6B0
   RuntimeId:        2640
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3188
   Default Value:    00000001428676B8
*/
#pragma pack(push, 8)
struct CriteriaStarCategoryInstance
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_HANDLE(class StatsCategoryBaseData) ParamX; /* 0x0008 */
  FB_HANDLE(class StatsCategoryBaseData) ParamY; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CriteriaStarCategoryInstance) == 24);

}
