#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/MathEntityAssembly.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AC20
   RuntimeId:        083B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C19
   VfTable:          000000014220BE58
   Address (Base):   00000001430F0840
*/
#pragma pack(push, 8)
class MathEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  MathEntityAssembly Assembly; /* 0x0020 */
  FB_BOOLEAN EvaluateOnEvent; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MathEntityData) == 56);

}
