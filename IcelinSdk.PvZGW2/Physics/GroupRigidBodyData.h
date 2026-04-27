#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851BB0
   RuntimeId:        14DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B6
   VfTable:          000000014227EE98
   Address (Base):   00000001430D0800
*/
#pragma pack(push, 16)
class GroupRigidBodyData : public RigidBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct MaterialIndicesLookup) RaycastMaterialIndicesLookups; /* 0x0120 */
  char pad_0128[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(GroupRigidBodyData) == 304);

}
