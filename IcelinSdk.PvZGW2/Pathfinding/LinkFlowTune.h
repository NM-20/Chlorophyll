#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428509D8
   RuntimeId:        13D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F1A
   VfTable:          000000014227C578
   Address (Base):   000000014310F9F0
*/
#pragma pack(push, 8)
class LinkFlowTune : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MaxSimultaneous; /* 0x0010 */
  FB_FLOAT32 DelayBeforeNextUser; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LinkFlowTune) == 24);

}
