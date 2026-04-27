#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUICppScreenData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871808
   RuntimeId:        2A83
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F1
   VfTable:          000000014236C698
   Address (Base):   00000001430F5770
*/
#pragma pack(push, 8)
class UIObjectTagCppScreenData : public PVZUICppScreenData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIObjectTagCppScreenData) == 48);

}
