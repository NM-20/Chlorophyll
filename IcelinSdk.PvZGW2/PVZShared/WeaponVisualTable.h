#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864268
   RuntimeId:        21C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1116
   VfTable:          0000000142352878
   Address (Base):   00000001431082B0
*/
#pragma pack(push, 8)
class WeaponVisualTable : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class WeaponVisualPair) VisualUnlocks; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WeaponVisualTable) == 24);

}
