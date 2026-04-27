#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/SchematicTreeProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832BE8
   RuntimeId:        00B2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0619
   VfTable:          00000001421E2DF8
   Address (Base):   000000014311CAD0
*/
#pragma pack(push, 8)
class SchematicTreeInputProperty : public SchematicTreeProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeInputProperty) == 32);

}
