#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872F70
   RuntimeId:        2B70
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B80A0
   Default Value:    0000000142872858
*/
#pragma pack(push, 1)
struct PVZLinkUsageFlags
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN HighJump; /* 0x0000 */
  FB_BOOLEAN JumpDown; /* 0x0001 */
  FB_BOOLEAN Vault; /* 0x0002 */
  FB_BOOLEAN ZTeleporter; /* 0x0003 */
  FB_BOOLEAN PTeleporter; /* 0x0004 */
  FB_BOOLEAN NTeleporter; /* 0x0005 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0006 */
#pragma pack(pop)

static_assert(sizeof(PVZLinkUsageFlags) == 6);

}
