#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Vegetation/VegetationTreeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1815
   TypeInfo Kind:    EntityClassInfo
   ClassId:          030F
   VfTable:          0000000000000000
   Address (Base):   0000000143123E00
*/
class ServerVegetationTreeEntity : public VegetationTreeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00B0[0x00E0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0190 */

static_assert(sizeof(ServerVegetationTreeEntity) == 400);

}
