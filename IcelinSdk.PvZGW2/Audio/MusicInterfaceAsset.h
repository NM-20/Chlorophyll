#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837E50
   RuntimeId:        055A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          080B
   VfTable:          00000001421F9AB8
   Address (Base):   0000000143117310
*/
#pragma pack(push, 8)
class MusicInterfaceAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MusicEventData) Events; /* 0x0018 */
  FB_REFARRAY(class MusicParameterData) Parameters; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MusicInterfaceAsset) == 40);

}
