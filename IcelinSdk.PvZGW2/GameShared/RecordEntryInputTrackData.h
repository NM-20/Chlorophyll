#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/RecordTrackChildrenData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F4D0
   RuntimeId:        12C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CCD
   VfTable:          00000001422765F0
   Address (Base):   00000001430EBF80
*/
#pragma pack(push, 8)
class RecordEntryInputTrackData : public RecordTrackChildrenData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 EntryId; /* 0x0040 */
  char pad_0044[0x0004];
  FB_HANDLE(class FloatTrackData) FireInput; /* 0x0048 */
  FB_HANDLE(class FloatTrackData) PitchInput; /* 0x0050 */
  FB_HANDLE(class FloatTrackData) YawInput; /* 0x0058 */
  FB_HANDLE(class FloatTrackData) RollInput; /* 0x0060 */
  FB_HANDLE(class FloatTrackData) ThrottleInput; /* 0x0068 */
  FB_HANDLE(class FloatTrackData) DigitalBitFlagsInput; /* 0x0070 */
  FB_HANDLE(class FloatTrackData) AimingYaw; /* 0x0078 */
  FB_HANDLE(class FloatTrackData) AimingPitch; /* 0x0080 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(RecordEntryInputTrackData) == 136);

}
