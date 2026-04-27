#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428348F8
   RuntimeId:        021C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          106A
   VfTable:          00000001421ECC38
   Address (Base):   000000014311B750
*/
#pragma pack(push, 8)
class BoolProvider_CharacterPhysicsState : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Character; /* 0x0010 */
  CharacterStateType State; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_CharacterPhysicsState) == 32);

}
