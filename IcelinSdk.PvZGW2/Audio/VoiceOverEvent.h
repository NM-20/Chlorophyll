#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838160
   RuntimeId:        0588
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1003
   VfTable:          00000001421F9990
   Address (Base):   0000000143117010
*/
#pragma pack(push, 8)
class VoiceOverEvent : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_UINT32 NameHash; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class VoiceOverNamedValue) Parameters; /* 0x0020 */
  FB_HANDLE(class VoiceOverLogicAsset) Owner; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverEvent) == 48);

}
