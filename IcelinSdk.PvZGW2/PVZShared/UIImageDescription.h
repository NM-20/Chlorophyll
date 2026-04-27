#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIItemDescription.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872188
   RuntimeId:        2B17
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E70
   VfTable:          000000014236BBA8
   Address (Base):   0000000143104DD0
*/
#pragma pack(push, 8)
class UIImageDescription : public UIItemDescription
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Identifier; /* 0x0028 */
  FB_CSTRING Name; /* 0x0030 */
  FB_CSTRING TexturePath; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIImageDescription) == 64);

}
