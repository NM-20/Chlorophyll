#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832B28
   RuntimeId:        00A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0613
   VfTable:          00000001421E2E48
   Address (Base):   00000001430F3660
*/
#pragma pack(push, 8)
class SchematicTreeIO : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeIO) == 24);

}
