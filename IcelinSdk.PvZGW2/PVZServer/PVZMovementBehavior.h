#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/MovementBehavior.h>
#include <IcelinSdk.PvZGW2/PVZShared/MovementStyleType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F778
   RuntimeId:        1DBB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0853
   VfTable:          000000014231D878
   Address (Base):   00000001430B5F60
*/
#pragma pack(push, 8)
class PVZMovementBehavior : public MovementBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MovementStyleType MovementStyleToApply; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZMovementBehavior) == 48);

}
