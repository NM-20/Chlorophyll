#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIGraphPriority.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIState.h>

namespace fb
{

/* TypeInfo (Array): 00000001428571C8
   RuntimeId:        199B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C6
   VfTable:          00000001422CB258
   Address (Base):   00000001430D59B0
*/
#pragma pack(push, 8)
class UIGraphEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EventSpec) Events; /* 0x0018 */
  FB_HANDLE(class UIGraphAsset) GraphAsset; /* 0x0020 */
  UIGraphPriority GraphPriority; /* 0x0028 */
  UIState State; /* 0x002C */
  FB_BOOLEAN PopPreviousGraph; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIGraphEntityData) == 56);

}
