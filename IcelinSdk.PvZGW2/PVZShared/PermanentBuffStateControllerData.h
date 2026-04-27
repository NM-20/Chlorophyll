#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBuffStateControllerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CF48
   RuntimeId:        2796
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FDE
   VfTable:          0000000142366170
   Address (Base):   00000001430F7150
*/
#pragma pack(push, 8)
class PermanentBuffStateControllerData : public PVZBuffStateControllerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 IntroTime; /* 0x0028 */
  FB_FLOAT32 IntroStartPower; /* 0x002C */
  FB_FLOAT32 IntroEndPower; /* 0x0030 */
  FB_FLOAT32 NormalPower; /* 0x0034 */
  FB_FLOAT32 OutroTime; /* 0x0038 */
  FB_FLOAT32 OutroStartPower; /* 0x003C */
  FB_FLOAT32 OutroEndPower; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PermanentBuffStateControllerData) == 72);

}
