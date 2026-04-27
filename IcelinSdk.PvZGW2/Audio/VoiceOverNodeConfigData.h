#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428381A0
   RuntimeId:        058C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1177
   VfTable:          00000001421F9970
   Address (Base):   00000001430B7530
*/
#pragma pack(push, 8)
class VoiceOverNodeConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverNode) Node; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverNodeConfigData) == 24);

}
