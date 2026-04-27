#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B7A8
   RuntimeId:        08EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0709
   VfTable:          000000014220AD58
   Address (Base):   0000000143115270
*/
#pragma pack(push, 8)
class MasterSkeletonAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SkeletonAsset) MasterSkeleton; /* 0x0018 */
  FB_STDARRAY(struct SubSkeleton) SubSkeletons; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MasterSkeletonAsset) == 40);

}
