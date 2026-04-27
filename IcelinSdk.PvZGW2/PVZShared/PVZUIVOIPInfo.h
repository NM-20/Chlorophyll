#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428712E0
   RuntimeId:        2A43
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0959
   VfTable:          000000014236CAD8
   Address (Base):   00000001430D8CF0
*/
#pragma pack(push, 8)
class PVZUIVOIPInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZUIPlayerVOIPStatus) VOIPStatus; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PVZUIVOIPInfo) == 24);

}
