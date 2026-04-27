#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/SchematicTreeEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832B88
   RuntimeId:        00AC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0616
   VfTable:          00000001421E2E18
   Address (Base):   000000014311CB30
*/
#pragma pack(push, 8)
class SchematicTreeOutputEvent : public SchematicTreeEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeOutputEvent) == 32);

}
