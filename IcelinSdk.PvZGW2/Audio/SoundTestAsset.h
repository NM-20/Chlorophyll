#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836890
   RuntimeId:        0405
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0631
   VfTable:          00000001421F4A58
   Address (Base):   00000001431186F0
*/
#pragma pack(push, 8)
class SoundTestAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class SoundTestTaskSpec) TaskSpecs; /* 0x0018 */
  FB_REFARRAY(class SoundTestSpec) TestSpecs; /* 0x0020 */
  FB_REFARRAY(class SoundTestSuite) Suites; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SoundTestAsset) == 48);

}
