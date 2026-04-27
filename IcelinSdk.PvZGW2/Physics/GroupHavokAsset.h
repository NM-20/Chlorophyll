#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/HavokAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428518A8
   RuntimeId:        14AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          070D
   VfTable:          000000014227F338
   Address (Base):   000000014310EFD0
*/
#pragma pack(push, 8)
class GroupHavokAsset : public HavokAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct AssetAabbs) Aabb; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GroupHavokAsset) == 48);

}
