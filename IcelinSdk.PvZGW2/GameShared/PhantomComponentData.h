#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E190
   RuntimeId:        11C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D25
   VfTable:          00000001422733E0
   Address (Base):   0000000143111670
*/
#pragma pack(push, 16)
class PhantomComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 BoxSize; /* 0x0070 */
  AntRef AsyncQueryPointerAsset; /* 0x0080 */
  AntRef EnableTrajectoryOverride; /* 0x0094 */
  AntRef TrajectoryOverride; /* 0x00A8 */
  char pad_00BC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(PhantomComponentData) == 192);

}
