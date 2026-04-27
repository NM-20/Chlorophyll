#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicInputData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837CB0
   RuntimeId:        0540
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F7
   VfTable:          00000001421F9B68
   Address (Base):   00000001431174F0
*/
#pragma pack(push, 8)
class MusicParameterData : public MusicInputData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DefaultValue; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MusicParameterData) == 40);

}
