#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836870
   RuntimeId:        0403
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          05FC
   VfTable:          00000001421F4A68
   Address (Base):   0000000143118750
*/
#pragma pack(push, 8)
class SoundTestSuite : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_REFARRAY(class SoundAsset) Assets; /* 0x0018 */
  FB_REFARRAY(class SoundTestSpec) Tests; /* 0x0020 */
  FB_BOOLEAN ProfileTests; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SoundTestSuite) == 48);

}
