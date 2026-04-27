#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ActionTreeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832C28
   RuntimeId:        00B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          076A
   VfTable:          00000001421E2DD8
   Address (Base):   000000014311CA10
*/
#pragma pack(push, 8)
class SchematicTreeData : public ActionTreeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SchematicTreeInputEvent) InputEvents; /* 0x0020 */
  FB_REFARRAY(class SchematicTreeInputProperty) InputProperties; /* 0x0028 */
  FB_REFARRAY(class SchematicTreeOutputEvent) OutputEvents; /* 0x0030 */
  FB_REFARRAY(class SchematicTreeOutputProperty) OutputProperties; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeData) == 64);

}
