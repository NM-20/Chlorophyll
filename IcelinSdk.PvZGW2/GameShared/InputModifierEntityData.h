#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848E48
   RuntimeId:        0D2D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C4C
   VfTable:          00000001422605E0
   Address (Base):   00000001430FD4B0
*/
#pragma pack(push, 8)
class InputModifierEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Action; /* 0x0018 */
  FB_FLOAT32 Offset; /* 0x001C */
  FB_FLOAT32 Scale; /* 0x0020 */
  FB_BOOLEAN Enabled; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputModifierEntityData) == 40);

}
