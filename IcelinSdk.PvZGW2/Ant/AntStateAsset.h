#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835578
   RuntimeId:        02E0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B5
   VfTable:          00000001421EFA98
   Address (Base):   0000000143100BD0
*/
#pragma pack(push, 8)
class AntStateAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_GUID StreamingGuid; /* 0x0018 */
  FB_INT32 ChunkSize; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AntStateAsset) == 48);

}
