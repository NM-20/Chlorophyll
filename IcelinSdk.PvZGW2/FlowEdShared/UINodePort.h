#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIWidgetEventID.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856C08
   RuntimeId:        1943
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          111D
   VfTable:          00000001422CB4C8
   Address (Base):   00000001430FB1D0
*/
#pragma pack(push, 8)
class UINodePort : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_CSTRING InstanceName; /* 0x0018 */
  UIWidgetEventID Query; /* 0x0020 */
  FB_BOOLEAN AllowManualRemove; /* 0x0024 */
  FB_BOOLEAN IsReferencePort; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UINodePort) == 40);

}
