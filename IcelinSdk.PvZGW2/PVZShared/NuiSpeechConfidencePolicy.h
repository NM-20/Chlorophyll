#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861E28
   RuntimeId:        1FF5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1284
   VfTable:          00000001423440A8
   Address (Base):   00000001431090F0
*/
#pragma pack(push, 8)
class NuiSpeechConfidencePolicy : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinimumConfidence; /* 0x0010 */
  FB_FLOAT32 SingleWordConfidence; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechConfidencePolicy) == 24);

}
