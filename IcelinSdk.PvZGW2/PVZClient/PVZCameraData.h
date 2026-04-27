#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859758
   RuntimeId:        1B40
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC6
   VfTable:          00000001422DBF28
   Address (Base):   00000001430FA390
*/
#pragma pack(push, 16)
class PVZCameraData : public CameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZCameraData) == 96);

}
