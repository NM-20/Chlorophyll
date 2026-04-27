#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIAbility.h>

namespace fb
{

/* TypeInfo (Array): 00000001428707D0
   RuntimeId:        29B9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E91
   VfTable:          000000014236D518
   Address (Base):   00000001430D8ED0
*/
#pragma pack(push, 8)
class UIAbilityInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIAbility Ability1; /* 0x0010 */
  UIAbility Ability2; /* 0x0028 */
  UIAbility Ability3; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIAbilityInfo) == 88);

}
