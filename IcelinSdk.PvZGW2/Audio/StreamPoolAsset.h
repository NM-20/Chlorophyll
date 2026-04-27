#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836590
   RuntimeId:        03D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F5
   VfTable:          00000001421F4B88
   Address (Base):   0000000143118C90
*/
#pragma pack(push, 8)
class StreamPoolAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 StreamPoolId; /* 0x0018 */
  char pad_001C[0x0004];
  FB_REFARRAY(class StreamPoolSetup) Setups; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(StreamPoolAsset) == 40);

}
