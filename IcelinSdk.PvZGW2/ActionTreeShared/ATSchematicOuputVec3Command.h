#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATCommandNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832CC8
   RuntimeId:        00C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F41
   VfTable:          00000001421E2D60
   Address (Base):   000000014311C830
*/
#pragma pack(push, 8)
class ATSchematicOuputVec3Command : public ATCommandNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SchematicTreeOutputProperty) Property; /* 0x0018 */
  FB_HANDLE(class ATVectorInput) Value; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATSchematicOuputVec3Command) == 40);

}
