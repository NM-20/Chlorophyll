#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856208
   RuntimeId:        18D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          061C
   VfTable:          00000001422C4BE0
   Address (Base):   00000001430DAAF0
*/
#pragma pack(push, 8)
class VisualEnvironmentSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SunRotationX; /* 0x0010 */
  FB_FLOAT32 SunRotationY; /* 0x0014 */
  FB_FLOAT32 SkyRotationPhi; /* 0x0018 */
  FB_INT32 DrawStats; /* 0x001C */
  FB_BOOLEAN DrawOnlyVisibleStats; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(VisualEnvironmentSettings) == 40);

}
