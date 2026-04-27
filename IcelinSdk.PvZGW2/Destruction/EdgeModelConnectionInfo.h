#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839050
   RuntimeId:        0660
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCD48
   Default Value:    0000000142B88CA4
*/
#pragma pack(push, 2)
struct EdgeModelConnectionInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT16 ConnectionInstanceRange; /* 0x0000 */
  FB_UINT16 NeighbourPartIndex; /* 0x0002 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(EdgeModelConnectionInfo) == 4);

}
