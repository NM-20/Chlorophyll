#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864378
   RuntimeId:        21D1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1139
   VfTable:          00000001423528A8
   Address (Base):   00000001430DA4F0
*/
#pragma pack(push, 8)
class CustomizationInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class CustomizationTeamInfo) Teams; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CustomizationInfo) == 24);

}
