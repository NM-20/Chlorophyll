#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284ED40
   RuntimeId:        1257
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07F5
   VfTable:          00000001422749C0
   Address (Base):   0000000143110E90
*/
#pragma pack(push, 8)
class VersionData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING disclaimer; /* 0x0018 */
  FB_INT32 Version; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING DateTime; /* 0x0028 */
  FB_CSTRING BranchId; /* 0x0030 */
  FB_CSTRING GameName; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(VersionData) == 64);

}
