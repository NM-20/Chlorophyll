#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIViewBaseAsset.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIScreenPurpose.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856D38
   RuntimeId:        1955
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0825
   VfTable:          00000001422CB440
   Address (Base):   00000001430E8BC0
*/
#pragma pack(push, 8)
class UIScreenAsset : public UIViewBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIAsset) UIAsset; /* 0x0058 */
  FB_CSTRING SwfPath; /* 0x0060 */
  UIScreenPurpose Purpose; /* 0x0068 */
  char pad_006C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(UIScreenAsset) == 112);

}
