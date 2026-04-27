#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428354B8
   RuntimeId:        02D4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B4588
   Default Value:    0000000142BEBA28
*/
#pragma pack(push, 4)
struct AntRef
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID AssetGuid; /* 0x0000 */
  FB_INT32 ProjectId; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(AntRef) == 20);

}
