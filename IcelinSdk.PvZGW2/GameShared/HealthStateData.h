#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DFA8
   RuntimeId:        11A7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB5
   VfTable:          00000001422735A8
   Address (Base):   00000001431117F0
*/
#pragma pack(push, 8)
class HealthStateData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class GameObjectData) Objects; /* 0x0010 */
  FB_REFARRAY(class NetworkableLoosePartPhysicsData) LoosePartPhysics; /* 0x0018 */
  FB_HANDLE(class ObjectBlueprint) SpawnedBangerBlueprint; /* 0x0020 */
  FB_HANDLE(class BangerSpawnImpulseParams) SpawnedBangerImpulseParams; /* 0x0028 */
  FB_FLOAT32 Health; /* 0x0030 */
  FB_UINT32 PartIndex; /* 0x0034 */
  FB_FLOAT32 RegenerateDelay; /* 0x0038 */
  FB_FLOAT32 RegenerateSpeed; /* 0x003C */
  FB_BOOLEAN CopyDamageToBanger; /* 0x0040 */
  FB_BOOLEAN PhysicsEnabled; /* 0x0041 */
  FB_BOOLEAN Indestructable; /* 0x0042 */
  FB_BOOLEAN CanSupportOtherParts; /* 0x0043 */
  FB_BOOLEAN RegenerateHealth; /* 0x0044 */
  char pad_0045[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(HealthStateData) == 72);

}
