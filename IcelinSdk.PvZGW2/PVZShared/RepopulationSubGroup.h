#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BasicSubGroup.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873548
   RuntimeId:        2BC4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EA2
   VfTable:          0000000142379380
   Address (Base):   00000001430F5230
*/
#pragma pack(push, 8)
class RepopulationSubGroup : public BasicSubGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 NextGroupTime; /* 0x0070 */
  FB_FLOAT32 CompletePercentage; /* 0x0074 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(RepopulationSubGroup) == 120);

}
