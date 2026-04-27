#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/PropertyTrackBaseData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D608
   RuntimeId:        1129
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CC0
   VfTable:          0000000142273F98
   Address (Base):   00000001430EC820
*/
#pragma pack(push, 8)
class ANTEnumTrackData : public PropertyTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ANTEnumKeyframe) Keyframes; /* 0x0038 */
  AntRef Signal; /* 0x0040 */
  FB_INT32 ResetValue; /* 0x0054 */
  FB_BOOLEAN ResetOnLeave; /* 0x0058 */
  char pad_0059[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ANTEnumTrackData) == 96);

}
