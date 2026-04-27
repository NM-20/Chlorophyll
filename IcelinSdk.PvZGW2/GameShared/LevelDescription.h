#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848E88
   RuntimeId:        0D32
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB660
   Default Value:    0000000142848EA0
*/
#pragma pack(push, 8)
struct LevelDescription
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_CSTRING Description; /* 0x0008 */
  FB_REFARRAY(class LevelDescriptionComponent) Components; /* 0x0010 */
  FB_BOOLEAN IsMultiplayer; /* 0x0018 */
  FB_BOOLEAN IsCoop; /* 0x0019 */
  FB_BOOLEAN IsMenu; /* 0x001A */
  FB_BOOLEAN IsEpilogue; /* 0x001B */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LevelDescription) == 32);

}
