#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F558
   RuntimeId:        1D99
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          101B
   VfTable:          000000014231D918
   Address (Base):   000000014310A830
*/
#pragma pack(push, 8)
class EnemyManDown : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(EnemyManDown) == 16);

}
