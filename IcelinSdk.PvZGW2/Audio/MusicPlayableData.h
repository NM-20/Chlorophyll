#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837CD0
   RuntimeId:        0542
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          083F
   VfTable:          00000001421F9B58
   Address (Base):   00000001430F28E0
*/
#pragma pack(push, 8)
class MusicPlayableData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_UINT32 PlayCount; /* 0x0018 */
  FB_FLOAT32 MinDelay; /* 0x001C */
  FB_FLOAT32 MaxDelay; /* 0x0020 */
  FB_UINT32 BeatsPerMinute; /* 0x0024 */
  FB_UINT32 BeatsPerBar; /* 0x0028 */
  FB_FLOAT32 Gain; /* 0x002C */
  FB_FLOAT32 Pitch; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MusicPlayableData) == 56);

}
