#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/SchematicTreeEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832B68
   RuntimeId:        00AA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0615
   VfTable:          00000001421E2E28
   Address (Base):   000000014311CB90
*/
#pragma pack(push, 8)
class SchematicTreeInputEvent : public SchematicTreeEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeInputEvent) == 32);

}
