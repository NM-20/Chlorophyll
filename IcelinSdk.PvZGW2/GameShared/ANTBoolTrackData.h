#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/BoolTrackData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D560
   RuntimeId:        111F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CBF
   VfTable:          0000000142274088
   Address (Base):   00000001430EC9A0
*/
#pragma pack(push, 8)
class ANTBoolTrackData : public BoolTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef Signal; /* 0x0040 */
  FB_BOOLEAN ResetOnLeave; /* 0x0054 */
  FB_BOOLEAN ResetValue; /* 0x0055 */
  char pad_0056[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(ANTBoolTrackData) == 88);

}
