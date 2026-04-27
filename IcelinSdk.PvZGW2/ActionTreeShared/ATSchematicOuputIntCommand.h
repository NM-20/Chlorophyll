#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATCommandNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832CA8
   RuntimeId:        00BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F44
   VfTable:          00000001421E2D78
   Address (Base):   000000014311C890
*/
#pragma pack(push, 8)
class ATSchematicOuputIntCommand : public ATCommandNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SchematicTreeOutputProperty) Property; /* 0x0018 */
  FB_HANDLE(class ATFloatInput) Value; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATSchematicOuputIntCommand) == 40);

}
