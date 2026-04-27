#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839070
   RuntimeId:        0662
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D32
   VfTable:          00000001421FDF50
   Address (Base):   00000001430FE3B0
*/
#pragma pack(push, 16)
class EdgeModelComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class RigidMeshAsset) RigidMeshes; /* 0x0070 */
  FB_STDARRAY(struct LinearTransform) InstanceTransforms; /* 0x0078 */
  FB_STDARRAY(FB_UINT16) MeshInstanceRanges; /* 0x0080 */
  FB_STDARRAY(FB_UINT16) ConnectionInstanceLookupTable; /* 0x0088 */
  FB_STDARRAY(struct EdgeModelConnectionInfo) Connections; /* 0x0090 */
  FB_STDARRAY(FB_UINT16) PartConnectionRanges; /* 0x0098 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(EdgeModelComponentData) == 160);

}
