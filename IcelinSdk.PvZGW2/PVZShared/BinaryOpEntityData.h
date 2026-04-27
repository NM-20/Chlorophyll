#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865A58
   RuntimeId:        231B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C4F
   VfTable:          0000000142350F88
   Address (Base):   00000001430E7A20
*/
#pragma pack(push, 8)
class BinaryOpEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(enum BinaryOp) Operators; /* 0x0020 */
  FB_INT32 In; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BinaryOpEntityData) == 48);

}
