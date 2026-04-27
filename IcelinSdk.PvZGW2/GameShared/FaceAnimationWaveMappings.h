#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849020
   RuntimeId:        0D46
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD9
   VfTable:          0000000142260508
   Address (Base):   0000000143114910
*/
#pragma pack(push, 8)
class FaceAnimationWaveMappings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AntRef AntAsset; /* 0x0010 */
  AntRef OnStartedTalking; /* 0x0024 */
  FB_STDARRAY(struct FaceAnimationWaveMapping) Mappings; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(FaceAnimationWaveMappings) == 64);

}
