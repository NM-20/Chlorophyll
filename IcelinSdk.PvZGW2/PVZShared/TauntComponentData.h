#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/TauntCommonBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863880
   RuntimeId:        212E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D34
   VfTable:          0000000142353790
   Address (Base):   00000001430D5770
*/
#pragma pack(push, 16)
class TauntComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct TauntInput) TauntInputSlots; /* 0x0070 */
  FB_STDARRAY(struct TauntEntry) Taunts; /* 0x0078 */
  FB_HANDLE(class InputRestrictionAsset) TauntingInputRestrictions; /* 0x0080 */
  TauntCommonBinding TauntBinding; /* 0x0088 */
  FB_BOOLEAN RestrictAIMovement; /* 0x0100 */
  char pad_0101[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(TauntComponentData) == 272);

}
