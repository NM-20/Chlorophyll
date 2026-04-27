#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/BTree/ENodeState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142872CB0
   RuntimeId:        2B42
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10E5
   VfTable:          00000001423796C0
   Address (Base):   00000001430B6CD0
*/
#pragma pack(push, 8)
class PVZBehavior : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 BehaviorIdentifier; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING Name; /* 0x0018 */
  FB_FLOAT32 Timeout; /* 0x0020 */
  ENodeState ReturnValue; /* 0x0024 */
  FB_BOOLEAN FireAndForget; /* 0x0028 */
  FB_BOOLEAN UseTimeout; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZBehavior) == 48);

}
