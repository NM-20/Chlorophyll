#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851178
   RuntimeId:        1444
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0886
   VfTable:          000000014227F660
   Address (Base):   000000014310F3F0
*/
#pragma pack(push, 16)
class MotionDampingData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Pitch; /* 0x0010 */
  FB_FLOAT32 Yaw; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 LinearModifier; /* 0x0020 */
  FB_FLOAT32 Roll; /* 0x0030 */
  FB_FLOAT32 Linear; /* 0x0034 */
  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MotionDampingData) == 64);

}
