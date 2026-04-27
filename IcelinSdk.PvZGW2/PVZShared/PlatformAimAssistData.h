#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DB78
   RuntimeId:        2842
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2CC8
   Default Value:    0000000142BB5C90
*/
#pragma pack(push, 8)
struct PlatformAimAssistData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GamePlatform Platform; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class SoldierAimAssistData) AimAssistData; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PlatformAimAssistData) == 16);

}
