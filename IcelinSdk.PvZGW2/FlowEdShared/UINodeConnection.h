#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856C48
   RuntimeId:        1947
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11B8
   VfTable:          00000001422CB4E8
   Address (Base):   000000014310D230
*/
#pragma pack(push, 8)
class UINodeConnection : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UINodeData) SourceNode; /* 0x0010 */
  FB_HANDLE(class UINodeData) TargetNode; /* 0x0018 */
  FB_HANDLE(class UINodePort) SourcePort; /* 0x0020 */
  FB_HANDLE(class UINodePort) TargetPort; /* 0x0028 */
  FB_CSTRING SourcePortName; /* 0x0030 */
  FB_CSTRING TargetPortName; /* 0x0038 */
  FB_INT32 NumScreensToPop; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UINodeConnection) == 72);

}
