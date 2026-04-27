#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicFadeData.h>
#include <IcelinSdk.PvZGW2/Audio/MusicSyncType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837D70
   RuntimeId:        054C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE5
   VfTable:          00000001421F9B18
   Address (Base):   0000000143117430
*/
#pragma pack(push, 8)
class SynchedFadeData : public MusicFadeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MusicSyncType SyncType; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SynchedFadeData) == 48);

}
