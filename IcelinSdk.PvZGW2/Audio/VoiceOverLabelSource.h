#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueConnection.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838620
   RuntimeId:        05D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E40
   VfTable:          00000001421F9780
   Address (Base):   0000000143116A10
*/
#pragma pack(push, 8)
class VoiceOverLabelSource : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VoiceOverValueConnection Source; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLabelSource) == 32);

}
