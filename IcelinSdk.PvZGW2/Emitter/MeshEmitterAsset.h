#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839F58
   RuntimeId:        0730
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0809
   VfTable:          00000001421FF408
   Address (Base):   00000001430DC950
*/
#pragma pack(push, 8)
class MeshEmitterAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF MeshEmitterResource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MeshEmitterAsset) == 32);

}
