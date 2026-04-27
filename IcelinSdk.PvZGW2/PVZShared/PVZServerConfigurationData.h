#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868930
   RuntimeId:        2407
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9020
   Default Value:    0000000142866718
*/
#pragma pack(push, 4)
struct PVZServerConfigurationData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 ScoreMultiplier; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(PVZServerConfigurationData) == 4);

}
