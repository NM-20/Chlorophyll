#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Audio/SoundType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836910
   RuntimeId:        040D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1113
   VfTable:          00000001421F4A28
   Address (Base):   0000000143118630
*/
#pragma pack(push, 8)
class SoundMapping : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SoundType SoundType; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class SoundAsset) Sound; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundMapping) == 32);

}
