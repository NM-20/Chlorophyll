#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B280
   RuntimeId:        08A1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C38
   VfTable:          000000014220B388
   Address (Base):   00000001430EF640
*/
#pragma pack(push, 8)
class PropertyCastEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 Precision; /* 0x001C */
  FB_FLOAT32 FloatValue; /* 0x0020 */
  FB_INT32 IntValue; /* 0x0024 */
  FB_UINT32 UIntValue; /* 0x0028 */
  char pad_002C[0x0004];
  FB_CSTRING StringValue; /* 0x0030 */
  LocalPlayerId LocalPlayerIdValue; /* 0x0038 */
  FB_BOOLEAN BoolValue; /* 0x003C */
  char pad_003D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(PropertyCastEntityData) == 64);

}
