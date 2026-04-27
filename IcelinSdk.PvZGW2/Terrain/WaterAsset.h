#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428546B8
   RuntimeId:        1750
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0620
   VfTable:          00000001422AF0B8
   Address (Base):   000000014310DBF0
*/
#pragma pack(push, 8)
class WaterAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF PhysicsResource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WaterAsset) == 32);

}
