#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855C88
   RuntimeId:        187E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E99
   VfTable:          00000001422BB750
   Address (Base):   000000014310D710
*/
#pragma pack(push, 8)
class RenderFramesKeyframe : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0010 */
  FB_FLOAT32 Length; /* 0x0014 */
  FB_CSTRING RenderFileName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RenderFramesKeyframe) == 32);

}
