#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876DB8
   RuntimeId:        2E2A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7C00
   Default Value:    0000000142BB6690
*/
#pragma pack(push, 1)
struct WaterEntityClipInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN Enable; /* 0x0000 */
  FB_BOOLEAN ClipFaceNorth; /* 0x0001 */
  FB_BOOLEAN ClipFaceSouth; /* 0x0002 */
  FB_BOOLEAN ClipFaceEast; /* 0x0003 */
  FB_BOOLEAN ClipFaceWest; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0005 */
#pragma pack(pop)

static_assert(sizeof(WaterEntityClipInfo) == 5);

}
