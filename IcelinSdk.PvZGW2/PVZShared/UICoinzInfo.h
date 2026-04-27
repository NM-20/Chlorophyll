#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870F20
   RuntimeId:        2A17
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0601
   VfTable:          000000014236CD70
   Address (Base):   00000001430D8E10
*/
#pragma pack(push, 8)
class UICoinzInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UICoinzOffer) CoinzData; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UICoinzInfo) == 24);

}
