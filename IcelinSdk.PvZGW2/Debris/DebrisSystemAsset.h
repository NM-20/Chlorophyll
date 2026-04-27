#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838F48
   RuntimeId:        0650
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0682
   VfTable:          00000001421FD588
   Address (Base):   0000000143116050
*/
#pragma pack(push, 8)
class DebrisSystemAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct DebrisHavokInfo) HavokMeshes; /* 0x0018 */
  FB_INT32 HavokMeshCount; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DebrisSystemAsset) == 40);

}
