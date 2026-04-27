#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142860408
   RuntimeId:        1E4C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0880
   VfTable:          00000001423205C0
   Address (Base):   000000014310A050
*/
#pragma pack(push, 8)
class MetricReport : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MetricEvent) Events; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MetricReport) == 24);

}
