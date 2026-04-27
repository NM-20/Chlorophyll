#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870AE0
   RuntimeId:        29E5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D8
   VfTable:          000000014236D1C0
   Address (Base):   00000001430E3B20
*/
#pragma pack(push, 8)
class UIGameSessionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Playlist; /* 0x0018 */
  FB_BOOLEAN Enabled; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIGameSessionEntityData) == 40);

}
