#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428381E0
   RuntimeId:        0590
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1002
   VfTable:          00000001421F9950
   Address (Base):   0000000143116F50
*/
#pragma pack(push, 8)
class VoiceOverLabel : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_UINT32 NameHash; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverLabel) == 32);

}
