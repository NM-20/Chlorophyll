#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428404D8
   RuntimeId:        0ADB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11BF
   VfTable:          00000001422327B8
   Address (Base):   00000001430FD870
*/
#pragma pack(push, 8)
class PA2LookAtConfiguration : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PA2LookAtGameStateSetting) OnGameStates; /* 0x0020 */
  FB_REFARRAY(class PA2LookAtGameStateSetting) OffGameStates; /* 0x0028 */
  AntRef ControllerGameState; /* 0x0030 */
  FB_INT32 DefaultOnController; /* 0x0044 */
  FB_INT32 OffController; /* 0x0048 */
  AntRef TargetGameState; /* 0x004C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PA2LookAtConfiguration) == 96);

}
