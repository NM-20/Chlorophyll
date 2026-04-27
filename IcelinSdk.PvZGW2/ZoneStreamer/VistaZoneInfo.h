#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428771D0
   RuntimeId:        2E6B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0428
   Default Value:    00000001428771E8
*/
#pragma pack(push, 8)
struct VistaZoneInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_INT16) Neighbours; /* 0x0000 */
  FB_STDARRAY(struct VistaZoneMeshInfo) Objects; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VistaZoneInfo) == 16);

}
