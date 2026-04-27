#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835F88
   RuntimeId:        0377
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          118F
   VfTable:          00000001421F15C0
   Address (Base):   00000001430D1160
*/
#pragma pack(push, 8)
class AudioGraphParameter : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DefaultValue; /* 0x0010 */
  FB_UINT32 NameHash; /* 0x0014 */
  FB_UINT16 ValueIndex; /* 0x0018 */
  char pad_001A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphParameter) == 32);

}
