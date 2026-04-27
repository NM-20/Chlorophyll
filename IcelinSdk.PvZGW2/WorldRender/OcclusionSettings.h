#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855C68
   RuntimeId:        187C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF5
   VfTable:          00000001422BB820
   Address (Base):   00000001430E9760
*/
#pragma pack(push, 8)
class OcclusionSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Enable; /* 0x0010 */
  FB_BOOLEAN CoverageEnable; /* 0x0011 */
  FB_BOOLEAN DrawShadowZbuffer; /* 0x0012 */
  FB_BOOLEAN DrawZbuffer; /* 0x0013 */
  FB_BOOLEAN DrawSplitView; /* 0x0014 */
  FB_BOOLEAN DrawBinaryBuffer; /* 0x0015 */
  FB_BOOLEAN DrawCoverageBuffer; /* 0x0016 */
  char pad_0017[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(OcclusionSettings) == 24);

}
