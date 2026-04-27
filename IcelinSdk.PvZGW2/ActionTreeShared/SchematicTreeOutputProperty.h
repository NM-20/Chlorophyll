#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/SchematicTreeProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832C08
   RuntimeId:        00B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0618
   VfTable:          00000001421E2DE8
   Address (Base):   000000014311CA70
*/
#pragma pack(push, 8)
class SchematicTreeOutputProperty : public SchematicTreeProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeOutputProperty) == 32);

}
