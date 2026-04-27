#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CE28
   RuntimeId:        2784
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E1D
   VfTable:          0000000142366150
   Address (Base):   00000001430F6E50
*/
#pragma pack(push, 8)
class DispellBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BuffData) Buffs; /* 0x0010 */
  FB_BOOLEAN DispellAllBuffs; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DispellBuffRestrictorData) == 32);

}
