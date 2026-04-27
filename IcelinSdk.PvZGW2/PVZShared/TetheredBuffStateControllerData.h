#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBuffStateControllerData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CF68
   RuntimeId:        2798
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE0
   VfTable:          0000000142366180
   Address (Base):   00000001430F70F0
*/
#pragma pack(push, 8)
class TetheredBuffStateControllerData : public PVZBuffStateControllerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FarDistanceThreshold; /* 0x0028 */
  FB_FLOAT32 CloseDistanceThreshold; /* 0x002C */
  FB_BOOLEAN AllowOccluded; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TetheredBuffStateControllerData) == 56);

}
