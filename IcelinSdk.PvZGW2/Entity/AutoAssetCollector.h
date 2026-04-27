#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C130
   RuntimeId:        0986
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1200
   VfTable:          0000000142212228
   Address (Base):   0000000143114DF0
*/
#pragma pack(push, 8)
class AutoAssetCollector : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class Asset) Assets; /* 0x0010 */
  FB_FLOAT32 AutoCollectMinimumUsagePercentage; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AutoAssetCollector) == 32);

}
