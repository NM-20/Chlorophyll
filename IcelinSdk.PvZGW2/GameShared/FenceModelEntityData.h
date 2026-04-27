#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/StaticModelEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B950
   RuntimeId:        0F92
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B2D
   VfTable:          00000001422686D8
   Address (Base):   00000001430D6910
*/
#pragma pack(push, 16)
class FenceModelEntityData : public StaticModelEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Width; /* 0x00F0 */
  FB_FLOAT32 Angle; /* 0x00F4 */
  char pad_00F8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(FenceModelEntityData) == 256);

}
