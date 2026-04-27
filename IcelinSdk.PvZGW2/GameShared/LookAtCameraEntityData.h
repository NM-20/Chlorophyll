#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DC60
   RuntimeId:        1177
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B41
   VfTable:          0000000142273968
   Address (Base):   00000001430EC340
*/
#pragma pack(push, 16)
class LookAtCameraEntityData : public CameraEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(LookAtCameraEntityData) == 176);

}
