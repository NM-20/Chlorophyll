#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838048
   RuntimeId:        0578
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCE88
   Default Value:    0000000142B88C7C
*/
#pragma pack(push, 1)
struct MusicPlayerRoutedTargetPlugins
{
  typedef struct ValueTypeInfo TypeInfo_t;

  SoundGraphPluginRef None; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0003 */
#pragma pack(pop)

static_assert(sizeof(MusicPlayerRoutedTargetPlugins) == 3);

}
