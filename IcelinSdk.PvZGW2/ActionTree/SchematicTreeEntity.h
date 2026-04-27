#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0004
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0400
   VfTable:          0000000000000000
   Address (Base):   0000000143142210
*/
class SchematicTreeEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0380];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x03A0 */

static_assert(sizeof(SchematicTreeEntity) == 928);

}
