#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B100
   RuntimeId:        0889
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C22
   VfTable:          000000014220B5F0
   Address (Base):   00000001430EFA60
*/
#pragma pack(push, 8)
class VecBuilderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 X; /* 0x001C */
  FB_FLOAT32 Y; /* 0x0020 */
  FB_FLOAT32 Z; /* 0x0024 */
  FB_FLOAT32 W; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VecBuilderEntityData) == 48);

}
