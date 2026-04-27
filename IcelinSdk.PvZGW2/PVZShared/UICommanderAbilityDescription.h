#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872028
   RuntimeId:        2B01
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E63
   VfTable:          000000014236BD28
   Address (Base):   00000001430F5590
*/
#pragma pack(push, 8)
class UICommanderAbilityDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0028 */
  FB_CSTRING Description; /* 0x0030 */
  FB_CSTRING TexturePath; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UICommanderAbilityDescription) == 64);

}
