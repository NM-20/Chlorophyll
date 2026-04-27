#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/BackendType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861980
   RuntimeId:        1FB7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C52E8
   Default Value:    0000000142861998
*/
#pragma pack(push, 8)
struct HostedModeBackendInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING HostedMode; /* 0x0000 */
  BackendType BackendType; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HostedModeBackendInfo) == 16);

}
