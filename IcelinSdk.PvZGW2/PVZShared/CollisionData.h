#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862B50
   RuntimeId:        20B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE6
   VfTable:          0000000142354158
   Address (Base):   00000001431085B0
*/
#pragma pack(push, 8)
class CollisionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ValueAtX) DamageAtVerticalVelocity; /* 0x0010 */
  FB_STDARRAY(struct ValueAtX) DamageAtHorizVelocity; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(CollisionData) == 32);

}
