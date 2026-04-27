#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Entity/StreamRealm.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundleReference.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D7D8
   RuntimeId:        113D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C54
   VfTable:          0000000142273D40
   Address (Base):   00000001430EC7C0
*/
#pragma pack(push, 8)
class BlueprintBundleEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StreamRealm StreamRealm; /* 0x0018 */
  char pad_001C[0x0004];
  BlueprintBundleReference Bundle; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(BlueprintBundleEntityData) == 88);

}
