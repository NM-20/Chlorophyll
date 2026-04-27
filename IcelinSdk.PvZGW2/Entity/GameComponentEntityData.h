#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A948
   RuntimeId:        080F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B05
   VfTable:          000000014220C0C0
   Address (Base):   00000001430BCA40
*/
#pragma pack(push, 16)
class GameComponentEntityData : public ComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Enabled; /* 0x0070 */
  char pad_0071[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(GameComponentEntityData) == 128);

}
