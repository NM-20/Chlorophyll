#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855540
   RuntimeId:        181E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0952
   VfTable:          00000001422B8778
   Address (Base):   00000001430DABB0
*/
#pragma pack(push, 8)
class VegetationSystemSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxActiveDistance; /* 0x0010 */
  FB_FLOAT32 MaxEffectDistance; /* 0x0014 */
  FB_UINT32 MaxActiveBones; /* 0x0018 */
  FB_FLOAT32 MaxWiggleDistance; /* 0x001C */
  FB_INT32 ForceShadowLod; /* 0x0020 */
  FB_FLOAT32 SimulationEaseOutTime; /* 0x0024 */
  FB_FLOAT32 TimeScale; /* 0x0028 */
  FB_UINT32 JobCount; /* 0x002C */
  FB_BOOLEAN DestructionEnable; /* 0x0030 */
  FB_BOOLEAN UseShadowLodOffset; /* 0x0031 */
  FB_BOOLEAN ShadowMeshEnable; /* 0x0032 */
  FB_BOOLEAN DissolveEnable; /* 0x0033 */
  FB_BOOLEAN Enable; /* 0x0034 */
  FB_BOOLEAN EnableJobs; /* 0x0035 */
  FB_BOOLEAN DrawNodes; /* 0x0036 */
  FB_BOOLEAN DrawNodeIDs; /* 0x0037 */
  FB_BOOLEAN DrawNodeStiffness; /* 0x0038 */
  FB_BOOLEAN DrawEnable; /* 0x0039 */
  FB_BOOLEAN BatchDrawEnable; /* 0x003A */
  FB_BOOLEAN DrawNonSimulatedAsRigid; /* 0x003B */
  FB_BOOLEAN DrawActiveInstanceBoxesEnable; /* 0x003C */
  FB_BOOLEAN DrawEffectDebugInfoEnable; /* 0x003D */
  FB_BOOLEAN DrawDamageDebugInfoEnable; /* 0x003E */
  FB_BOOLEAN DrawStatsEnable; /* 0x003F */
  FB_BOOLEAN ProceduralAnimationEnable; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(VegetationSystemSettings) == 72);

}
