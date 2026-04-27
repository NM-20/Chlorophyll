#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838AB0
   RuntimeId:        061A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCE08
   Default Value:    0000000142838AC8
*/
#pragma pack(push, 8)
struct VoiceOverManuscriptLanguageColumns
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class AudioLanguage) Language; /* 0x0000 */
  FB_CSTRING TextColumn; /* 0x0008 */
  FB_CSTRING SubtitleOffsetColumn; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverManuscriptLanguageColumns) == 24);

}
