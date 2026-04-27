#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864398
   RuntimeId:        21D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11FE
   VfTable:          0000000142352888
   Address (Base):   00000001430E5680
*/
#pragma pack(push, 8)
class CustomizationTeamInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TeamName; /* 0x0010 */
  FB_REFARRAY(class CustomizationArchetypeInfo) CharacterArchetypes; /* 0x0018 */
  FB_UINT32 SelectedArchetypeIndex; /* 0x0020 */
  FB_UINT32 VisibleArchetypeCount; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CustomizationTeamInfo) == 40);

}
