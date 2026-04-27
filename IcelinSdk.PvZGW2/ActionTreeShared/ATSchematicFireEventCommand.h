#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATCommandNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832C48
   RuntimeId:        00B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F42
   VfTable:          00000001421E2DC0
   Address (Base):   000000014311C9B0
*/
#pragma pack(push, 8)
class ATSchematicFireEventCommand : public ATCommandNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SchematicTreeOutputEvent) Event; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATSchematicFireEventCommand) == 32);

}
