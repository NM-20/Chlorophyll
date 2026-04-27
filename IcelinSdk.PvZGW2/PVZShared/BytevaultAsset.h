#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F148
   RuntimeId:        28CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D6
   VfTable:          000000014236E260
   Address (Base):   0000000143105430
*/
#pragma pack(push, 8)
class BytevaultAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) DefaultAbilities; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) ConsumableData; /* 0x0020 */
  FB_STDARRAY(FB_CSTRING) BubbleTips; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BytevaultAsset) == 48);

}
