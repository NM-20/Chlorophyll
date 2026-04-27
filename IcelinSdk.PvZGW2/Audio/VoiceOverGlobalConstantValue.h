#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428383A0
   RuntimeId:        05AC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1109
   VfTable:          00000001421F98A0
   Address (Base):   0000000143116CB0
*/
#pragma pack(push, 8)
class VoiceOverGlobalConstantValue : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class VoiceOverConstantValue) Source; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverGlobalConstantValue) == 32);

}
