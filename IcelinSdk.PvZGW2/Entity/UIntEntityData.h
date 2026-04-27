#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B808
   RuntimeId:        08F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AED
   VfTable:          000000014220ACE8
   Address (Base):   00000001430F0EA0
*/
#pragma pack(push, 8)
class UIntEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_UINT32 DefaultValue; /* 0x001C */
  FB_UINT32 IncDecValue; /* 0x0020 */
  FB_UINT32 In; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIntEntityData) == 40);

}
