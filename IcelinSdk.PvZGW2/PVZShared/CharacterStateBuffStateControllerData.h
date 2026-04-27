#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBuffStateControllerData.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CF28
   RuntimeId:        2794
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE2
   VfTable:          0000000142366190
   Address (Base):   00000001430F71B0
*/
#pragma pack(push, 8)
class CharacterStateBuffStateControllerData : public PVZBuffStateControllerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InitialDuration; /* 0x0028 */
  CharacterStateType CharacterState; /* 0x002C */
  FB_FLOAT32 ActiveTimeout; /* 0x0030 */
  FB_FLOAT32 Cooldown; /* 0x0034 */
  FB_BOOLEAN KillOnBuffEffectRequest; /* 0x0038 */
  FB_BOOLEAN LaunchedOnly; /* 0x0039 */
  FB_BOOLEAN PowerDownOnKill; /* 0x003A */
  char pad_003B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CharacterStateBuffStateControllerData) == 64);

}
