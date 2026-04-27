#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142867A90
   RuntimeId:        23BF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3CC8
   Default Value:    0000000142867AA8
*/
#pragma pack(push, 8)
struct HostMigrationSnapshot
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Wave; /* 0x0000 */
  FB_FLOAT32 GardenDamage; /* 0x0008 */
  FB_UINT8 Garden; /* 0x000C */
  FB_UINT8 GardensDefended; /* 0x000D */
  char pad_000E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HostMigrationSnapshot) == 16);

}
