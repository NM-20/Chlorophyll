#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/LanguageFormat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837560
   RuntimeId:        04D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E94
   VfTable:          00000001421FA218
   Address (Base):   0000000143117970
*/
#pragma pack(push, 8)
class AudioLanguage : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  LanguageFormat LanguageMapping; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AudioLanguage) == 32);

}
