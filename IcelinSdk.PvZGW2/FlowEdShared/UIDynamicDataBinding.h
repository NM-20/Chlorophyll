#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIDataBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856CF8
   RuntimeId:        1951
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E2F
   VfTable:          00000001422CB488
   Address (Base):   00000001430E8CE0
*/
#pragma pack(push, 8)
class UIDynamicDataBinding : public UIDataBinding
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIDataSourceInfo) Bindings; /* 0x0010 */
  FB_BOOLEAN Refresh; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIDynamicDataBinding) == 32);

}
