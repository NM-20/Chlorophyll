#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856C68
   RuntimeId:        1949
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          111F
   VfTable:          00000001422CB4A8
   Address (Base):   00000001430B5BE0
*/
#pragma pack(push, 8)
class UINodeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_HANDLE(class UIGraphAsset) ParentGraph; /* 0x0018 */
  FB_BOOLEAN IsRootNode; /* 0x0020 */
  FB_BOOLEAN ParentIsScreen; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UINodeData) == 40);

}
