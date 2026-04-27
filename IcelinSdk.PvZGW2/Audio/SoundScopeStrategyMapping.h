#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837870
   RuntimeId:        04FC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCF48
   Default Value:    0000000142B88CC0
*/
#pragma pack(push, 8)
struct SoundScopeStrategyMapping
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class SoundScopeData) Scope; /* 0x0000 */
  FB_HANDLE(class SoundScopeStrategyData) Strategy; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundScopeStrategyMapping) == 16);

}
