#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838220
   RuntimeId:        0594
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08FC
   VfTable:          00000001421F9930
   Address (Base):   0000000143116E90
*/
#pragma pack(push, 8)
class EntityVoiceOverInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VoiceOverObject) VoiceOverType; /* 0x0010 */
  FB_REFARRAY(class VoiceOverLabel) Labels; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EntityVoiceOverInfo) == 32);

}
