#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>
#include <IcelinSdk.PvZGW2/PVZShared/ETauntType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FA88
   RuntimeId:        1DEB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10E7
   VfTable:          000000014231D608
   Address (Base):   00000001430F94F0
*/
#pragma pack(push, 8)
class PVZBehaviorTaunt : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ETauntType Taunt; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorTaunt) == 56);

}
