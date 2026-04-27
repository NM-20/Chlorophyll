#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SharedBundleBaseAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D6E8
   RuntimeId:        1135
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B6
   VfTable:          0000000142273E38
   Address (Base):   00000001430EC6A0
*/
#pragma pack(push, 8)
class BlueprintBundle : public SharedBundleBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Blueprint) Blueprint; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BlueprintBundle) == 32);

}
