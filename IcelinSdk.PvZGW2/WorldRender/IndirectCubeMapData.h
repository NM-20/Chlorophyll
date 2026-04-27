#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855AA8
   RuntimeId:        1860
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B55
   VfTable:          00000001422BBB08
   Address (Base):   000000014310D770
*/
#pragma pack(push, 16)
class IndirectCubeMapData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Resolution; /* 0x0060 */
  FB_FLOAT32 Scale; /* 0x0064 */
  FB_FLOAT32 FadeDistance; /* 0x0068 */
  FB_BOOLEAN Enable; /* 0x006C */
  char pad_006D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(IndirectCubeMapData) == 112);

}
