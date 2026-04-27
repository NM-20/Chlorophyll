#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ToolData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B470
   RuntimeId:        2622
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EFD
   VfTable:          000000014235ACE0
   Address (Base):   00000001430B6440
*/
#pragma pack(push, 8)
class WeaponData : public ToolData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WeaponData) == 24);

}
