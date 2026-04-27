#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/ZoneStreamer/ZoneStreamerInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142877150
   RuntimeId:        2E63
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B5B
   VfTable:          0000000142397BE8
   Address (Base):   00000001430F4750
*/
#pragma pack(push, 16)
class ZoneStreamerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ZoneStreamerInfo Info; /* 0x0060 */
  FB_BOOLEAN ClientSideOnly; /* 0x0088 */
  FB_BOOLEAN EnableDefaultFocus; /* 0x0089 */
  FB_BOOLEAN LoadCurrentZone; /* 0x008A */
  FB_UINT8 BundlePriority; /* 0x008B */
  char pad_008C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerEntityData) == 144);

}
