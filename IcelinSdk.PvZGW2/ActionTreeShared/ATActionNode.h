#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATNode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428323D8
   RuntimeId:        0032
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F27
   VfTable:          00000001421E3260
   Address (Base):   00000001430BF2B0
*/
#pragma pack(push, 8)
class ATActionNode : public ATNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TimeBegin; /* 0x0018 */
  FB_FLOAT32 TimeEnd; /* 0x001C */
  FB_BOOLEAN Disabled; /* 0x0020 */
  FB_BOOLEAN ControlsLifetime; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATActionNode) == 40);

}
