#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836690
   RuntimeId:        03E5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD248
   Default Value:    0000000142B88C38
*/
#pragma pack(push, 8)
struct AudioLanguageMapping
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AudioLanguage) Source; /* 0x0000 */
  FB_HANDLE(class AudioLanguage) Target; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AudioLanguageMapping) == 16);

}
