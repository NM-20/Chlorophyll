#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/TimeShape.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B4F8
   RuntimeId:        08C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ACE
   VfTable:          000000014220AFF8
   Address (Base):   00000001430F0FC0
*/
#pragma pack(push, 8)
class BalancedDilationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 DilationValue; /* 0x001C */
  FB_FLOAT32 RealTimeDuration; /* 0x0020 */
  FB_FLOAT32 RecoveryTime; /* 0x0024 */
  TimeShape DilationShape; /* 0x0028 */
  TimeShape RecoveryShape; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BalancedDilationEntityData) == 48);

}
