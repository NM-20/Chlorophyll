#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/MeshProjectileEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AC38
   RuntimeId:        25D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B15
   VfTable:          000000014235B030
   Address (Base):   00000001430D0020
*/
#pragma pack(push, 16)
class GhostedProjectileEntityData : public MeshProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ProxyConvergenceDelay; /* 0x0140 */
  FB_FLOAT32 ProxyConvergenceDuration; /* 0x0144 */
  FB_BOOLEAN ProxyConvergenceInstantOnAttach; /* 0x0148 */
  FB_BOOLEAN ForceProxyConvergence; /* 0x0149 */
  char pad_014A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0150 */
#pragma pack(pop)

static_assert(sizeof(GhostedProjectileEntityData) == 336);

}
