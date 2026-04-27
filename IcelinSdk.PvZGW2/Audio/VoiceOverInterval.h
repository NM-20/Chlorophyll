#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838200
   RuntimeId:        0592
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FCC
   VfTable:          00000001421F9940
   Address (Base):   0000000143116EF0
*/
#pragma pack(push, 8)
class VoiceOverInterval : public DataContainer
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

static_assert(sizeof(VoiceOverInterval) == 32);

}
