#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/BTree/ENodeType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834238
   RuntimeId:        01AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1285
   VfTable:          00000001421EB6B8
   Address (Base):   00000001430DCDD0
*/
#pragma pack(push, 8)
class BTNodeData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ENodeType NodeType; /* 0x0010 */
  FB_BOOLEAN Enabled; /* 0x0014 */
  FB_BOOLEAN NodeDebugEnabled; /* 0x0015 */
  FB_BOOLEAN DisabledResult; /* 0x0016 */
  char pad_0017[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BTNodeData) == 24);

}
