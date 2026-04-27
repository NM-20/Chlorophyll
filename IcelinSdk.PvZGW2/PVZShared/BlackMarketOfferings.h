#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428716C8
   RuntimeId:        2A6F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0851
   VfTable:          000000014236C9D0
   Address (Base):   00000001430D9110
*/
#pragma pack(push, 8)
class BlackMarketOfferings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct BlackMarketOffering) Offerings; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BlackMarketOfferings) == 24);

}
