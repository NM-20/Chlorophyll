#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AF80
   RuntimeId:        0871
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C1A
   VfTable:          000000014220B858
   Address (Base):   00000001430EFE80
*/
#pragma pack(push, 16)
class TransformBlendEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform In1; /* 0x0020 */
  LinearTransform In2; /* 0x0060 */
  FB_FLOAT32 BlendValue; /* 0x00A0 */
  FB_FLOAT32 BlendValue2; /* 0x00A4 */
  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(TransformBlendEntityData) == 176);

}
