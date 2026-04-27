#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATValueNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832D28
   RuntimeId:        00C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F32
   VfTable:          00000001421E2D18
   Address (Base):   000000014311C710
*/
#pragma pack(push, 8)
class ATSchematicReadFloatValue : public ATValueNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SchematicTreeInputProperty) Property; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ATSchematicReadFloatValue) == 32);

}
