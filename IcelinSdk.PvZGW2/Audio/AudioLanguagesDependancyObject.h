#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428366D0
   RuntimeId:        03E9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E37
   VfTable:          00000001421F4B18
   Address (Base):   0000000143118B10
*/
#pragma pack(push, 8)
class AudioLanguagesDependancyObject : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AudioLanguage) AudioLanguages; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AudioLanguagesDependancyObject) == 24);

}
