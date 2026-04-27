#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BC30
   RuntimeId:        0FC0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09AB
   VfTable:          0000000142268168
   Address (Base):   0000000143112F90
*/
#pragma pack(push, 8)
class LinkDebugEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_UINT32 MaxResolvedLinkDebugs; /* 0x001C */
  FB_UINT32 ExpectedTargetDataCountInRuntime; /* 0x0020 */
  FB_UINT32 ExpectedTargetInstanceCountInRuntime; /* 0x0024 */
  FB_BOOLEAN PipelineTestEnabled; /* 0x0028 */
  FB_BOOLEAN TestOnInit; /* 0x0029 */
  FB_BOOLEAN ExpectAllTargetsToBeResolvableFromSource; /* 0x002A */
  FB_BOOLEAN ExpectAllTargetsToBeInSameSubLevel; /* 0x002B */
  FB_BOOLEAN ExpectAllTargetsToBeImmutable; /* 0x002C */
  FB_BOOLEAN ExpectAllTargetsToBeDynamic; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LinkDebugEntityData) == 48);

}
