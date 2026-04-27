#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BB38
   RuntimeId:        092C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          063B
   VfTable:          0000000142212680
   Address (Base):   00000001431151B0
*/
#pragma pack(push, 8)
class ForceGroupAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN MeshScattering; /* 0x0018 */
  FB_BOOLEAN Vegetation; /* 0x0019 */
  FB_BOOLEAN Effects; /* 0x001A */
  FB_BOOLEAN Cloth; /* 0x001B */
  FB_BOOLEAN Physics; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ForceGroupAsset) == 32);

}
