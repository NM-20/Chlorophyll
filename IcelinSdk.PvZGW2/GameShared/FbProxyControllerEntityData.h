#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/FbProxyControllerEntityBinding.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AA00
   RuntimeId:        0EC1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A21
   VfTable:          0000000142263CB0
   Address (Base):   00000001430BE310
*/
#pragma pack(push, 8)
class FbProxyControllerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FbProxyControllerEntityBinding CannedAnimBinding; /* 0x0018 */
  FB_INT32 AnimationEntitySpacePriority; /* 0x0068 */
  AntRef PointerGameState; /* 0x006C */
  FB_BOOLEAN AlwaysClearEntitySpaceWhenInScenario; /* 0x0080 */
  char pad_0081[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(FbProxyControllerEntityData) == 136);

}
