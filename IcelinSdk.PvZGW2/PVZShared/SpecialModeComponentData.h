#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/SpecialModeBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863B88
   RuntimeId:        2155
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DA9
   VfTable:          0000000142353238
   Address (Base):   00000001430D56B0
*/
#pragma pack(push, 16)
class SpecialModeComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SpecialModeBinding SpecialModeAnimationBinding; /* 0x0070 */
  FB_INT32 SetModeEnum; /* 0x00AC */
  FB_STDARRAY(struct SpecialModeEnterTimeOverride) EnterTimeOverrides; /* 0x00B0 */
  char pad_00B8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(SpecialModeComponentData) == 192);

}
