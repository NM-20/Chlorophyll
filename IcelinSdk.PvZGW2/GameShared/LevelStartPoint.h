#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848F48
   RuntimeId:        0D3A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9808
   Default Value:    0000000142848F60
*/
#pragma pack(push, 8)
struct LevelStartPoint
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_STDARRAY(FB_CSTRING) AutoloadSublevels; /* 0x0008 */
  FB_BOOLEAN IsDefault; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LevelStartPoint) == 24);

}
