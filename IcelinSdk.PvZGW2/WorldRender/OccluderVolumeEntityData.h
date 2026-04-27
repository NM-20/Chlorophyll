#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855698
   RuntimeId:        1832
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B02
   VfTable:          00000001422BBF28
   Address (Base):   00000001430EA1E0
*/
#pragma pack(push, 16)
class OccluderVolumeEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CoverageValue; /* 0x0060 */
  FB_BOOLEAN OccluderHighPriority; /* 0x0064 */
  FB_BOOLEAN OccluderIsConservative; /* 0x0065 */
  FB_BOOLEAN Visible; /* 0x0066 */
  char pad_0067[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(OccluderVolumeEntityData) == 112);

}
