#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428505F8
   RuntimeId:        139B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0659
   VfTable:          000000014227C820
   Address (Base):   00000001430FC6D0
*/
#pragma pack(push, 8)
class RepulsionAccelerationTune : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 initialAcc; /* 0x0018 */
  FB_FLOAT32 outerCushionAcc; /* 0x001C */
  FB_FLOAT32 innerCushionAcc; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RepulsionAccelerationTune) == 40);

}
