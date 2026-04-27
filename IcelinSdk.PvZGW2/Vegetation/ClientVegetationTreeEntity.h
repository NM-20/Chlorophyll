#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Vegetation/VegetationTreeEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1814
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0310
   VfTable:          0000000000000000
   Address (Base):   0000000143123D60
*/
class ClientVegetationTreeEntity : public VegetationTreeEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00B0[0x0100];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */

static_assert(sizeof(ClientVegetationTreeEntity) == 432);

}
