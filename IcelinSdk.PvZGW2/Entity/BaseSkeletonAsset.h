#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B730
   RuntimeId:        08E6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06FC
   VfTable:          000000014220ADA8
   Address (Base):   00000001430FDED0
*/
#pragma pack(push, 8)
class BaseSkeletonAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BaseSkeletonAsset) == 24);

}
