#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/CompareOp.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B380
   RuntimeId:        08B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C34
   VfTable:          000000014220B270
   Address (Base):   00000001430EF460
*/
#pragma pack(push, 8)
class CompareEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  CompareOp Operator; /* 0x001C */
  FB_FLOAT32 FloatIn0; /* 0x0020 */
  FB_FLOAT32 FloatIn1; /* 0x0024 */
  FB_INT32 IntIn0; /* 0x0028 */
  FB_INT32 IntIn1; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CompareEntityData) == 48);

}
