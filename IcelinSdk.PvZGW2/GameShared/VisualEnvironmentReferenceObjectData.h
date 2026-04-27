#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LogicReferenceObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EEA0
   RuntimeId:        126D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0982
   VfTable:          00000001422747F8
   Address (Base):   00000001430DBA50
*/
#pragma pack(push, 16)
class VisualEnvironmentReferenceObjectData : public LogicReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Priority; /* 0x00A0 */
  FB_BOOLEAN OverrideVisibility; /* 0x00A4 */
  FB_BOOLEAN OwnedByLightingContextPad; /* 0x00A5 */
  char pad_00A6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(VisualEnvironmentReferenceObjectData) == 176);

}
