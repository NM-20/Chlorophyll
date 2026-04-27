#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundScopeStageData.h>
#include <IcelinSdk.PvZGW2/Audio/ScopeStageSortProperty.h>
#include <IcelinSdk.PvZGW2/Audio/PropertySortScopeStageOrder.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837930
   RuntimeId:        0508
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10FA
   VfTable:          00000001421FA0C0
   Address (Base):   00000001430F2E20
*/
#pragma pack(push, 8)
class PropertySortScopeStageData : public SoundScopeStageData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Count; /* 0x0010 */
  ScopeStageSortProperty Property; /* 0x0014 */
  PropertySortScopeStageOrder Order; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PropertySortScopeStageData) == 32);

}
