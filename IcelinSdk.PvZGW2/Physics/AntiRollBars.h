#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850F08
   RuntimeId:        141E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA600
   Default Value:    0000000142BA4E70
*/
#pragma pack(push, 8)
struct AntiRollBars
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AntiRollBar) Front; /* 0x0000 */
  FB_HANDLE(class AntiRollBar) Rear; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AntiRollBars) == 16);

}
