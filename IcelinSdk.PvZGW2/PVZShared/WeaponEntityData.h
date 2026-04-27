#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponClassEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D820
   RuntimeId:        281C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B09
   VfTable:          000000014236F5C8
   Address (Base):   00000001430F5A10
*/
#pragma pack(push, 16)
class WeaponEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  WeaponClassEnum WeaponClass; /* 0x0080 */
  char pad_0084[0x0004];
  FB_STDARRAY(struct WeaponStateData) WeaponStates; /* 0x0088 */
  FB_HANDLE(class WeaponFiringData) WeaponFiring; /* 0x0090 */
  FB_HANDLE(class WeaponData) CustomWeaponType; /* 0x0098 */
  FB_HANDLE(class GameAIWeaponData) AIData; /* 0x00A0 */
  FB_HANDLE(class GameAIWeaponData) AIDataCoop; /* 0x00A8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(WeaponEntityData) == 176);

}
