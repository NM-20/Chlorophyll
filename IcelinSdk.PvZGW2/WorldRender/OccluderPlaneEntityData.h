#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428556B8
   RuntimeId:        1834
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B83
   VfTable:          00000001422BBE80
   Address (Base):   00000001430EA180
*/
#pragma pack(push, 16)
class OccluderPlaneEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CoverageValue; /* 0x0060 */
  FB_BOOLEAN OccluderHighPriority; /* 0x0064 */
  FB_BOOLEAN OccluderIsConservative; /* 0x0065 */
  FB_BOOLEAN DoubledSided; /* 0x0066 */
  FB_BOOLEAN Visible; /* 0x0067 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(OccluderPlaneEntityData) == 112);

}
