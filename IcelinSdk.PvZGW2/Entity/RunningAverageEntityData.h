#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B340
   RuntimeId:        08AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C1
   VfTable:          000000014220B2A8
   Address (Base):   00000001430EF4C0
*/
#pragma pack(push, 8)
class RunningAverageEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_UINT32 NumberOfValues; /* 0x001C */
  FB_FLOAT32 In; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RunningAverageEntityData) == 40);

}
