#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871F58
   RuntimeId:        2AF5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E64
   VfTable:          000000014236BF08
   Address (Base):   00000001431050D0
*/
#pragma pack(push, 8)
class UIRankDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIRankDescription) == 40);

}
