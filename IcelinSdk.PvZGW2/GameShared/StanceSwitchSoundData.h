#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ECF0
   RuntimeId:        11BD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8FC8
   Default Value:    000000014284E110
*/
#pragma pack(push, 8)
struct StanceSwitchSoundData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class SoundAsset) StanceSwitchSound; /* 0x0000 */
  FB_STDARRAY(FB_INT32) ValidStances; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StanceSwitchSoundData) == 16);

}
