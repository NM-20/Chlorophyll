#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/SchematicTreeIO.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/SchematicTreePropertyType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832BC8
   RuntimeId:        00B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0617
   VfTable:          00000001421E2E08
   Address (Base):   00000001430F35A0
*/
#pragma pack(push, 8)
class SchematicTreeProperty : public SchematicTreeIO
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 PropertyId; /* 0x0018 */
  SchematicTreePropertyType PropertyType; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeProperty) == 32);

}
