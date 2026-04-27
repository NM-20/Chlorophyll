#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ReflectionVolumeComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EDA0
   RuntimeId:        125D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D31
   VfTable:          0000000142274900
   Address (Base):   00000001430EC1C0
*/
#pragma pack(push, 16)
class BoxReflectionVolumeComponentData : public ReflectionVolumeComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PbrBoxReflectionVolumeEntityData) ReflectionVolume; /* 0x0070 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(BoxReflectionVolumeComponentData) == 128);

}
