#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FCF8
   RuntimeId:        1343
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0827
   VfTable:          0000000142277060
   Address (Base):   00000001431101D0
*/
#pragma pack(push, 8)
class MorphSliders : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MorphTwoWaySlider) TwoWaySliders; /* 0x0018 */
  FB_REFARRAY(class MorphOneWaySlider) OneWaySliders; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MorphSliders) == 40);

}
