#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/Vec3TrackData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D5C0
   RuntimeId:        1125
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CBA
   VfTable:          0000000142273F48
   Address (Base):   00000001430EC880
*/
#pragma pack(push, 16)
class ANTVec3TrackData : public Vec3TrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef Signal; /* 0x0050 */
  char pad_0064[0x000C];
  Vec3 ResetValue; /* 0x0070 */
  FB_BOOLEAN ResetOnLeave; /* 0x0080 */
  char pad_0081[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ANTVec3TrackData) == 144);

}
