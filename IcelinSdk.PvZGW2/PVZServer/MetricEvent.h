#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428603E8
   RuntimeId:        1E4A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05E4
   VfTable:          0000000142320500
   Address (Base):   00000001430B7690
*/
#pragma pack(push, 8)
class MetricEvent : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT64 Owner; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MetricEvent) == 24);

}
