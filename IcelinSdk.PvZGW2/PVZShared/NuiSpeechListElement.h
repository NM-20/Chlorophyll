#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861FE8
   RuntimeId:        2011
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F6E
   VfTable:          0000000142343F78
   Address (Base):   0000000143108E50
*/
#pragma pack(push, 8)
class NuiSpeechListElement : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Tag; /* 0x0010 */
  FB_CSTRING Sid; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) Variations; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechListElement) == 40);

}
