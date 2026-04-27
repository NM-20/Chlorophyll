#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCharacterScalingBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864118
   RuntimeId:        21AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D97
   VfTable:          0000000142352998
   Address (Base):   00000001430D4090
*/
#pragma pack(push, 16)
class PVZCharacterScalingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZCharacterScalingBinding Binding; /* 0x0070 */
  FB_FLOAT32 InitialCharacterScale; /* 0x0098 */
  FB_FLOAT32 AdditionalLocoScale; /* 0x009C */
  FB_FLOAT32 BlendOutTime; /* 0x00A0 */
  char pad_00A4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterScalingComponentData) == 176);

}
