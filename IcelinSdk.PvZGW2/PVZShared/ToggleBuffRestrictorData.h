#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CEC8
   RuntimeId:        278E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E1C
   VfTable:          0000000142366110
   Address (Base):   00000001430F6C70
*/
#pragma pack(push, 8)
class ToggleBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ToggleBuffRestrictorData) == 16);

}
