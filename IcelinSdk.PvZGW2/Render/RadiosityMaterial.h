#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852D70
   RuntimeId:        15FC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ECA
   VfTable:          00000001422A16F8
   Address (Base):   000000014310E610
*/
#pragma pack(push, 16)
class RadiosityMaterial : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_FLOAT32 EmissiveIntensity; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Color; /* 0x0020 */
  FB_FLOAT32 Opacity; /* 0x0030 */
  char pad_0034[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RadiosityMaterial) == 64);

}
