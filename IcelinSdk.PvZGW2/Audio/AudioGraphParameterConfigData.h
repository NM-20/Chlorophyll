#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836088
   RuntimeId:        0387
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05FD
   VfTable:          00000001421F1538
   Address (Base):   00000001430F3060
*/
#pragma pack(push, 8)
class AudioGraphParameterConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 NameHash; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AudioGraphParameterConfigData) == 24);

}
