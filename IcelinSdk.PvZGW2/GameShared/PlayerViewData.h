#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A1C8
   RuntimeId:        0E52
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0836
   VfTable:          000000014225F498
   Address (Base):   0000000143113E30
*/
#pragma pack(push, 8)
class PlayerViewData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SubViewData) SubViews; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlayerViewData) == 24);

}
