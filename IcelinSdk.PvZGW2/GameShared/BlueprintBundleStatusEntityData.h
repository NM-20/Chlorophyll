#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Entity/StreamRealm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D818
   RuntimeId:        1141
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C9
   VfTable:          0000000142273CF0
   Address (Base):   00000001430EC700
*/
#pragma pack(push, 8)
class BlueprintBundleStatusEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StreamRealm StreamRealm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING BundleName; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BlueprintBundleStatusEntityData) == 40);

}
