#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CE48
   RuntimeId:        2786
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E1A
   VfTable:          0000000142366130
   Address (Base):   00000001430F6DF0
*/
#pragma pack(push, 8)
class ExclusionBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BuffData) Buffs; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ExclusionBuffRestrictorData) == 24);

}
