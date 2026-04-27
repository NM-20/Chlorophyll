#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BED0
   RuntimeId:        0FE8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A86
   VfTable:          0000000142267EE8
   Address (Base):   00000001430ECE20
*/
#pragma pack(push, 8)
class JointValidationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING JointName; /* 0x0020 */
  FB_FLOAT32 Joint_X; /* 0x0028 */
  FB_FLOAT32 Joint_Y; /* 0x002C */
  FB_FLOAT32 Joint_Z; /* 0x0030 */
  FB_FLOAT32 Tolerance; /* 0x0034 */
  FB_FLOAT32 Tick; /* 0x0038 */
  FB_BOOLEAN DisableValidation; /* 0x003C */
  char pad_003D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(JointValidationEntityData) == 64);

}
