#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/GamePhysicsEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AEA8
   RuntimeId:        0EFF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B1E
   VfTable:          00000001422625F8
   Address (Base):   00000001430D7150
*/
#pragma pack(push, 16)
class StaticModelGroupEntityData : public GamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct StaticModelGroupMemberData) MemberDatas; /* 0x0090 */
  FB_UINT32 NetworkIdCount; /* 0x0098 */
  FB_GUID HackToSolveRealTimeTweakingIssue; /* 0x009C */
  char pad_00AC[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(StaticModelGroupEntityData) == 176);

}
