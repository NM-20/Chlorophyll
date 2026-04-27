#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838E70
   RuntimeId:        0642
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0881
   VfTable:          00000001421FC610
   Address (Base):   0000000143116170
*/
#pragma pack(push, 8)
class ClothRendererSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QualityLevel ClothRendererQualityLevel; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ClothRendererSettings) == 24);

}
