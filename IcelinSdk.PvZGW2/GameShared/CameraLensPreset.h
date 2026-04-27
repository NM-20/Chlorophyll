#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DBE0
   RuntimeId:        116F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B9
   VfTable:          0000000142273A48
   Address (Base):   0000000143111970
*/
#pragma pack(push, 8)
class CameraLensPreset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DefaultFocalLength; /* 0x0018 */
  FB_FLOAT32 SensorWidth; /* 0x001C */
  FB_FLOAT32 SensorHeight; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class VisualEnvironmentBlueprint) VisualEnvironment; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CameraLensPreset) == 48);

}
