#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZClient/PVZTargetCameraData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428597D8
   RuntimeId:        1B48
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DCE
   VfTable:          00000001422DBFE0
   Address (Base):   00000001430FA2D0
*/
#pragma pack(push, 16)
class PVZSpectateCameraData : public PVZTargetCameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(PVZSpectateCameraData) == 288);

}
