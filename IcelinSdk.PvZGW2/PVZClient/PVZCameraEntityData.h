#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859778
   RuntimeId:        1B42
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B42
   VfTable:          00000001422DBF60
   Address (Base):   00000001430E8740
*/
#pragma pack(push, 16)
class PVZCameraEntityData : public CameraEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZCameraEntityData) == 176);

}
