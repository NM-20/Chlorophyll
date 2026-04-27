#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865CD8
   RuntimeId:        2343
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4608
   Default Value:    0000000142865CF0
*/
#pragma pack(push, 8)
struct MissionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING MissionTitle; /* 0x0000 */
  FB_CSTRING MissionText; /* 0x0008 */
  FB_CSTRING MissionId; /* 0x0010 */
  FB_CSTRING PassiveMissionTitle; /* 0x0018 */
  FB_CSTRING PassiveMissionText; /* 0x0020 */
  FB_BOOLEAN IsComplete; /* 0x0028 */
  FB_BOOLEAN HasDependency; /* 0x0029 */
  FB_BOOLEAN IsRunning; /* 0x002A */
  FB_BOOLEAN IsExclusive; /* 0x002B */
  FB_BOOLEAN TrackGlobally; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(MissionData) == 48);

}
