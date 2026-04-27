#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardData.h>
#include <IcelinSdk.PvZGW2/PVZShared/DurangoAchievementSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B8E0
   RuntimeId:        2662
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC3
   VfTable:          000000014235AAB8
   Address (Base):   00000001430D3850
*/
#pragma pack(push, 8)
class AwardAchievementData : public AwardData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DurangoAchievementSettings DurangoSpecific; /* 0x00A0 */
  char pad_00A4[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(AwardAchievementData) == 168);

}
