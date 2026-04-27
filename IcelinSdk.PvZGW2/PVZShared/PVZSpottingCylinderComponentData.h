#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863AE8
   RuntimeId:        214B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D21
   VfTable:          0000000142353528
   Address (Base):   00000001430E7660
*/
#pragma pack(push, 16)
class PVZSpottingCylinderComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0070 */
  FB_FLOAT32 MaxRadius; /* 0x0074 */
  FB_FLOAT32 RadiusChangeTime; /* 0x0078 */
  FB_BOOLEAN Enabled; /* 0x007C */
  char pad_007D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZSpottingCylinderComponentData) == 128);

}
