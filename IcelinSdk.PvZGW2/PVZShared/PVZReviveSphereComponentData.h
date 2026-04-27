#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863AC8
   RuntimeId:        2149
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D93
   VfTable:          00000001423535A8
   Address (Base):   00000001430E76C0
*/
#pragma pack(push, 16)
class PVZReviveSphereComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0070 */
  FB_FLOAT32 MaxRadius; /* 0x0074 */
  FB_FLOAT32 RadiusChangeTime; /* 0x0078 */
  FB_FLOAT32 ReviveTime; /* 0x007C */
  FB_FLOAT32 ReviveHPModifier; /* 0x0080 */
  FB_BOOLEAN TeamSpecific; /* 0x0084 */
  FB_BOOLEAN ExcludeSelf; /* 0x0085 */
  FB_BOOLEAN Enabled; /* 0x0086 */
  char pad_0087[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PVZReviveSphereComponentData) == 144);

}
