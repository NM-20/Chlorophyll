#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870468
   RuntimeId:        2985
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0754
   VfTable:          000000014236D968
   Address (Base):   00000001430F55F0
*/
#pragma pack(push, 8)
class PVZUILocalizeCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUILocalizeCompData) == 48);

}
