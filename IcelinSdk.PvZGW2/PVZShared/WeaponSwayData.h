#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B610
   RuntimeId:        2636
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD6
   VfTable:          000000014235AC38
   Address (Base):   00000001430F7930
*/
#pragma pack(push, 8)
class WeaponSwayData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(WeaponSwayData) == 16);

}
