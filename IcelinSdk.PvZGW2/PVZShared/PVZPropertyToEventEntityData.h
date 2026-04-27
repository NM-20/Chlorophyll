#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865998
   RuntimeId:        230F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09FB
   VfTable:          0000000142350EA8
   Address (Base):   00000001430E7D80
*/
#pragma pack(push, 8)
class PVZPropertyToEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 InFloat; /* 0x001C */
  FB_INT32 InInt; /* 0x0020 */
  FB_UINT32 InUint; /* 0x0024 */
  FB_CSTRING InString; /* 0x0028 */
  FB_BOOLEAN InBool; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZPropertyToEventEntityData) == 56);

}
