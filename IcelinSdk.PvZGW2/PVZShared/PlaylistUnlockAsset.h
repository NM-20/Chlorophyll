#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869468
   RuntimeId:        2493
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0730
   VfTable:          0000000142355DA8
   Address (Base):   0000000143107890
*/
#pragma pack(push, 8)
class PlaylistUnlockAsset : public UnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) PlaylistId; /* 0x0048 */
  FB_INT32 StartRank; /* 0x0050 */
  FB_INT32 EndRank; /* 0x0054 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PlaylistUnlockAsset) == 88);

}
