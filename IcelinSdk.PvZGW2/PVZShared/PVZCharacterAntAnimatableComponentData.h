#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCharacterAntBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862618
   RuntimeId:        206C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB6
   VfTable:          0000000142343DB8
   Address (Base):   00000001430E83E0
*/
#pragma pack(push, 16)
class PVZCharacterAntAnimatableComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZCharacterAntBinding PVZCharacterBinding; /* 0x0070 */
  FB_BOOLEAN HideWeaponDefault; /* 0x0160 */
  FB_BOOLEAN HideBodyPropDefault; /* 0x0161 */
  char pad_0162[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterAntAnimatableComponentData) == 368);

}
