#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CEA8
   RuntimeId:        278C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E16
   VfTable:          0000000142366100
   Address (Base):   00000001430F6CD0
*/
#pragma pack(push, 8)
class HealableBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN RestrictIfAtMaxHealth; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HealableBuffRestrictorData) == 24);

}
