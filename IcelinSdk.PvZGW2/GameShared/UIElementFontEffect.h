#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C3C8
   RuntimeId:        1030
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0632
   VfTable:          0000000142267A80
   Address (Base):   00000001430FCE50
*/
#pragma pack(push, 8)
class UIElementFontEffect : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING EffectScript; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIElementFontEffect) == 32);

}
