#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/VectorMathOp.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B300
   RuntimeId:        08A9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F2
   VfTable:          000000014220B318
   Address (Base):   00000001430EF580
*/
#pragma pack(push, 8)
class VectorMathOpEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  VectorMathOp MathOperator; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VectorMathOpEntityData) == 32);

}
