#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836530
   RuntimeId:        03CF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0635
   VfTable:          00000001421F4BA8
   Address (Base):   00000001430BE5B0
*/
#pragma pack(push, 8)
class SoundAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundScopeData) Scope; /* 0x0018 */
  FB_STDARRAY(struct SoundDataReference) ReferencedData; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundAsset) == 40);

}
