#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/LevelModeType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865488
   RuntimeId:        22BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC2
   VfTable:          0000000142351460
   Address (Base):   00000001430E51A0
*/
#pragma pack(push, 8)
class LevelInfoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LevelModeType LevelModeType; /* 0x0018 */
  FB_UINT32 LevelHostedMode; /* 0x001C */
  FB_UINT32 LevelIndex; /* 0x0020 */
  FB_UINT32 ModeIndex; /* 0x0024 */
  FB_CSTRING LevelNameOnHost; /* 0x0028 */
  FB_CSTRING GameModeNameOnHost; /* 0x0030 */
  FB_CSTRING InputModeString; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(LevelInfoEntityData) == 64);

}
