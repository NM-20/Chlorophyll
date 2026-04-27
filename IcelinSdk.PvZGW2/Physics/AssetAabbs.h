#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851880
   RuntimeId:        14AC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8888
   Default Value:    0000000142851898
*/
#pragma pack(push, 8)
struct AssetAabbs
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct AxisAlignedBox) PartAabb; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(AssetAabbs) == 8);

}
