#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869A88
   RuntimeId:        24EF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0888
   VfTable:          00000001423559F8
   Address (Base):   0000000143107530
*/
#pragma pack(push, 8)
class PlayerIconData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class StatsCategoryBaseData) KitCategory; /* 0x0010 */
  FB_HANDLE(class TextureAsset) Image; /* 0x0018 */
  FB_CSTRING ImageName; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PlayerIconData) == 40);

}
