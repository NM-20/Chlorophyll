#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceEntityBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BBF8
   RuntimeId:        0938
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AFF
   VfTable:          0000000142212510
   Address (Base):   00000001430EEBC0
*/
#pragma pack(push, 16)
class LocalWindForceConeEntityData : public LocalWindForceEntityBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 InnerRadius; /* 0x0080 */
  FB_FLOAT32 OuterRadius; /* 0x0084 */
  FB_FLOAT32 ConeInnerAngle; /* 0x0088 */
  FB_FLOAT32 ConeOuterAngle; /* 0x008C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceConeEntityData) == 144);

}
