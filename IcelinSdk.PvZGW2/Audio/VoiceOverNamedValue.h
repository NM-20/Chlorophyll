#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValue.h>
#include <IcelinSdk.PvZGW2/Audio/VoiceOverValueType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838120
   RuntimeId:        0584
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FFE
   VfTable:          00000001421F99B0
   Address (Base):   00000001430F2760
*/
#pragma pack(push, 8)
class VoiceOverNamedValue : public VoiceOverValue
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_UINT32 NameHash; /* 0x0018 */
  VoiceOverValueType ValueType; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverNamedValue) == 32);

}
