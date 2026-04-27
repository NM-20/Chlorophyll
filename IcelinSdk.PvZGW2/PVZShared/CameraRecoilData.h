#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DDC8
   RuntimeId:        2860
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E7D
   VfTable:          000000014236E830
   Address (Base):   00000001431056D0
*/
#pragma pack(push, 8)
class CameraRecoilData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SpringConstant; /* 0x0010 */
  FB_FLOAT32 SpringDamping; /* 0x0014 */
  FB_FLOAT32 SpringMinThresholdAngle; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CameraRecoilData) == 32);

}
