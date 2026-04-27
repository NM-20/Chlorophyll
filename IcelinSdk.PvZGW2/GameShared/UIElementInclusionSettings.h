#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C5A8
   RuntimeId:        1046
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB000
   Default Value:    000000014284C5C0
*/
#pragma pack(push, 8)
struct UIElementInclusionSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) CustomInclusionCritera; /* 0x0000 */
  FB_BOOLEAN IsSingleplayerLayer; /* 0x0008 */
  FB_BOOLEAN IsMultiplayerLayer; /* 0x0009 */
  FB_BOOLEAN IsSDLayer; /* 0x000A */
  FB_BOOLEAN IsHDLayer; /* 0x000B */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIElementInclusionSettings) == 16);

}
