#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/StabilizerProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850F28
   RuntimeId:        1420
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8948
   Default Value:    0000000142850F40
*/
#pragma pack(push, 4)
struct StabilizerSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  StabilizerProperty Property; /* 0x0000 */
  FB_FLOAT32 Strength; /* 0x0004 */
  FB_FLOAT32 Radius; /* 0x0008 */
  FB_BOOLEAN Advanced; /* 0x000C */
  FB_BOOLEAN Use2DRadiusTest; /* 0x000D */
  FB_BOOLEAN UseInputOverride; /* 0x000E */
  char pad_000F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StabilizerSettings) == 16);

}
