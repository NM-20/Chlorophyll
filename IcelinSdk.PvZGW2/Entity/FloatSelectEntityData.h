#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B498
   RuntimeId:        08C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA8
   VfTable:          000000014220B110
   Address (Base):   00000001430EF280
*/
#pragma pack(push, 8)
class FloatSelectEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 InPosOrZero; /* 0x001C */
  FB_FLOAT32 InNeg; /* 0x0020 */
  FB_FLOAT32 Select; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FloatSelectEntityData) == 40);

}
