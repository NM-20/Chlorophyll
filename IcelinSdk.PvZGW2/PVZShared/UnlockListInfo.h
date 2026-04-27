#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428694A8
   RuntimeId:        2497
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E1F
   VfTable:          0000000142355E88
   Address (Base):   00000001430DA370
*/
#pragma pack(push, 8)
class UnlockListInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UnlockInfo) UnlockInfos; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UnlockListInfo) == 24);

}
