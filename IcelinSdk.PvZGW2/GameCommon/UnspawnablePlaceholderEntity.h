#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntity.h>

namespace fb
{

class UnspawnableObjectManager
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B29
   TypeInfo Kind:    EntityClassInfo
   ClassId:          030C
   VfTable:          0000000000000000
   Address (Base):   000000014313B4B0
*/
class UnspawnablePlaceholderEntity : public SpatialEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0028[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */

static_assert(sizeof(UnspawnablePlaceholderEntity) == 88);

};

}
