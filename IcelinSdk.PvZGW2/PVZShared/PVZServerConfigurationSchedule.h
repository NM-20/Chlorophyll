#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZServerConfigurationData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868950
   RuntimeId:        2409
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3888
   Default Value:    0000000142866928
*/
#pragma pack(push, 8)
struct PVZServerConfigurationSchedule
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Licenses; /* 0x0000 */
  FB_STDARRAY(FB_CSTRING) Levels; /* 0x0008 */
  PVZServerConfigurationData Data; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZServerConfigurationSchedule) == 24);

}
