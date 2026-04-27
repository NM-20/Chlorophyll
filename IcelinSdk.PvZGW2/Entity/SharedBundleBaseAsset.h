#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B688
   RuntimeId:        08DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B5
   VfTable:          000000014220ADD0
   Address (Base):   00000001430FDF30
*/
#pragma pack(push, 8)
class SharedBundleBaseAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SharedBundleBaseAsset) == 24);

}
