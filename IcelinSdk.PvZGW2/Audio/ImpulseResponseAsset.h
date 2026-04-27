#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundDataAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428365B0
   RuntimeId:        03D7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          068C
   VfTable:          00000001421F4B78
   Address (Base):   00000001430F2FA0
*/
#pragma pack(push, 8)
class ImpulseResponseAsset : public SoundDataAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ImpulseResponseAsset) == 48);

}
