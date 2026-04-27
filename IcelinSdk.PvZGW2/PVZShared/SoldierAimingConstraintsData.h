#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/AimingConstraintsData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862A10
   RuntimeId:        20A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E4A
   VfTable:          00000001423541F8
   Address (Base):   00000001431086D0
*/
#pragma pack(push, 8)
class SoldierAimingConstraintsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AimingConstraintsData SwimmingConstraints; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoldierAimingConstraintsData) == 32);

}
