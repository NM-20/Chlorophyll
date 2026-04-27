#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838E90
   RuntimeId:        0644
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB0
   VfTable:          00000001421FC600
   Address (Base):   0000000143116110
*/
#pragma pack(push, 8)
class ClothSystemSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QualityLevel ClothSystemQualityLevel; /* 0x0010 */
  FB_FLOAT32 DefaultActivationRadius; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ClothSystemSettings) == 24);

}
