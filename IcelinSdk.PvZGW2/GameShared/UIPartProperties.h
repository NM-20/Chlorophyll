#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIPartIdentifier.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AF68
   RuntimeId:        0F0B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9468
   Default Value:    000000014284AF80
*/
#pragma pack(push, 4)
struct UIPartProperties
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIPartIdentifier Identifier; /* 0x0000 */
  FB_FLOAT32 Range; /* 0x0004 */
  FB_FLOAT32 Frequency; /* 0x0008 */
  FB_BOOLEAN CompensateFreelook; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIPartProperties) == 16);

}
