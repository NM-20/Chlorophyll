#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854D88
   RuntimeId:        17C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0675
   VfTable:          00000001422B54A8
   Address (Base):   000000014310DA10
*/
#pragma pack(push, 8)
class GroupTrackRootData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TimelineTrackData) Children; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GroupTrackRootData) == 32);

}
