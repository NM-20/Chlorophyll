#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854448
   RuntimeId:        172C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          066E
   VfTable:          00000001422AF328
   Address (Base):   00000001430FB530
*/
#pragma pack(push, 8)
class TerrainStreamingTreeAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TerrainStreamingTreeAsset) == 24);

}
