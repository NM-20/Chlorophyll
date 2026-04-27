#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/FloatTrackData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D580
   RuntimeId:        1121
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC5
   VfTable:          0000000142273FE8
   Address (Base):   00000001430EC940
*/
#pragma pack(push, 8)
class ANTFloatTrackData : public FloatTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef Signal; /* 0x0040 */
  FB_FLOAT32 ResetValue; /* 0x0054 */
  FB_BOOLEAN ResetOnLeave; /* 0x0058 */
  char pad_0059[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ANTFloatTrackData) == 96);

}
