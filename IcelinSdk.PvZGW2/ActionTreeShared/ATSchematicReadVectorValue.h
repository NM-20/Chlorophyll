#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATValueNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832D48
   RuntimeId:        00C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F31
   VfTable:          00000001421E2D00
   Address (Base):   000000014311C6B0
*/
#pragma pack(push, 8)
class ATSchematicReadVectorValue : public ATValueNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SchematicTreeInputProperty) Property; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATSchematicReadVectorValue) == 32);

}
