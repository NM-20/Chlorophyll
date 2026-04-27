#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F308
   RuntimeId:        28E6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B80E0
   Default Value:    000000014286F320
*/
#pragma pack(push, 8)
struct PVZSaveDataSource
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class PVZSaveBaseAsset) DataCategory; /* 0x0000 */
  FB_CSTRING DataKey; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZSaveDataSource) == 16);

}
