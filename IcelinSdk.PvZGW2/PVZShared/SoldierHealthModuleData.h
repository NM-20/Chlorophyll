#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862B70
   RuntimeId:        20BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0889
   VfTable:          0000000142354110
   Address (Base):   00000001430F8710
*/
#pragma pack(push, 8)
class SoldierHealthModuleData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoldierHealthModuleData) == 16);

}
