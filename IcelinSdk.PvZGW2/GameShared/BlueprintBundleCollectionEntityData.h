#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Entity/StreamRealm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D7F8
   RuntimeId:        113F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A52
   VfTable:          0000000142273D78
   Address (Base):   00000001430EC760
*/
#pragma pack(push, 8)
class BlueprintBundleCollectionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StreamRealm StreamRealm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class BlueprintBundleCollection) Collection; /* 0x0020 */
  FB_INT32 ActiveIndex; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BlueprintBundleCollectionEntityData) == 48);

}
