#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SubWorldInclusionSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C518
   RuntimeId:        09BE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0845
   VfTable:          00000001422135D0
   Address (Base):   0000000143114C70
*/
#pragma pack(push, 8)
class WorldPartInclusionSettings : public SubWorldInclusionSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(WorldPartInclusionSettings) == 24);

}
