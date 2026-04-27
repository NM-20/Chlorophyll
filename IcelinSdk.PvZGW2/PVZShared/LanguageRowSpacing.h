#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/LanguageFormat.h>

namespace fb
{

/* TypeInfo (Array): 00000001428719F0
   RuntimeId:        2AA1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1768
   Default Value:    0000000142BFF058
*/
#pragma pack(push, 4)
struct LanguageRowSpacing
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LanguageFormat Language; /* 0x0000 */
  FB_FLOAT32 RowSpacing; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(LanguageRowSpacing) == 8);

}
