#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837708
   RuntimeId:        04E8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BBEE0
   Default Value:    0000000142837720
*/
#pragma pack(push, 8)
struct SoundGraphInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct SoundGraphVoiceInfo) Voices; /* 0x0000 */
  FB_STDARRAY(struct SoundGraphLinkedPluginAttribute) LinkedPluginAttributes; /* 0x0008 */
  FB_STDARRAY(struct SoundGraphPluginConnection) Connections; /* 0x0010 */
  FB_STDARRAY(struct SoundGraphPluginConstructParam) ConstructParams; /* 0x0018 */
  FB_UINT32 PluginsParamCount; /* 0x0020 */
  FB_UINT32 PluginCount; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundGraphInfo) == 40);

}
