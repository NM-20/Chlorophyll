#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835638
   RuntimeId:        02EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EDD
   VfTable:          00000001421EFA30
   Address (Base):   00000001430DCD70
*/
#pragma pack(push, 8)
class AntMemorySettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 RTPoolLayersControllers; /* 0x0010 */
  FB_INT32 RTPoolStateflowControllers; /* 0x0014 */
  FB_INT32 RTPoolStateflowNodeControllers; /* 0x0018 */
  FB_INT32 RTPoolTransitionControllers; /* 0x001C */
  FB_INT32 RTPoolClipControllers; /* 0x0020 */
  FB_INT32 RTPoolChooserControllers; /* 0x0024 */
  FB_INT32 RTPoolLoopingControllers; /* 0x0028 */
  FB_INT32 RTPoolTransparentControllers; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AntMemorySettings) == 48);

}
