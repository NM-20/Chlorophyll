#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldInclusionSetting.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C538
   RuntimeId:        09C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E25
   VfTable:          00000001422135B0
   Address (Base):   0000000143114C10
*/
#pragma pack(push, 8)
class WorldPartInclusionSetting : public SubWorldInclusionSetting
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WorldPartInclusionSetting) == 32);

}
