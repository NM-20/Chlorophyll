#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C3B8
   RuntimeId:        09A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0844
   VfTable:          0000000142213720
   Address (Base):   00000001430FD9F0
*/
#pragma pack(push, 8)
class SubWorldInclusionSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SubWorldInclusionSetting) Settings; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SubWorldInclusionSettings) == 24);

}
