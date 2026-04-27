#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Render/LocalPlayerViewId.h>
#include <IcelinSdk.PvZGW2/GameShared/ExposureMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DC20
   RuntimeId:        1173
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B3E
   VfTable:          0000000142273A10
   Address (Base):   00000001430DBB70
*/
#pragma pack(push, 16)
class CameraEntityBaseData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING NameId; /* 0x0060 */
  FB_INT32 Priority; /* 0x0068 */
  LocalPlayerViewId ViewId; /* 0x006C */
  FB_HANDLE(class CameraLensPreset) PhysicalCamera; /* 0x0070 */
  FB_FLOAT32 FocalLength; /* 0x0078 */
  FB_FLOAT32 FocusDistance; /* 0x007C */
  FB_FLOAT32 ExposureCompensation; /* 0x0080 */
  FB_FLOAT32 Aperture; /* 0x0084 */
  FB_FLOAT32 ShutterSpeed; /* 0x0088 */
  ExposureMode ExposureMode; /* 0x008C */
  FB_FLOAT32 EV; /* 0x0090 */
  FB_FLOAT32 ISO; /* 0x0094 */
  FB_FLOAT32 SpotMeterScale; /* 0x0098 */
  FB_BOOLEAN Enabled; /* 0x009C */
  char pad_009D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(CameraEntityBaseData) == 160);

}
