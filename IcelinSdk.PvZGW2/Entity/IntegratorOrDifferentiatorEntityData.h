#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B3C0
   RuntimeId:        08B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A10
   VfTable:          000000014220B238
   Address (Base):   00000001430EF3A0
*/
#pragma pack(push, 8)
class IntegratorOrDifferentiatorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 StartValue; /* 0x001C */
  FB_FLOAT32 Input; /* 0x0020 */
  FB_FLOAT32 MaxValue; /* 0x0024 */
  FB_FLOAT32 MinValue; /* 0x0028 */
  FB_BOOLEAN Bounded; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(IntegratorOrDifferentiatorEntityData) == 48);

}
