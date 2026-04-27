#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A870
   RuntimeId:        25AB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D59
   VfTable:          000000014235B1E0
   Address (Base):   00000001430D3730
*/
#pragma pack(push, 16)
class UIObjectTagComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIObjectTagTreeNodeClass) ObjectType; /* 0x0070 */
  FB_CSTRING OverrideLabel; /* 0x0078 */
  FB_BOOLEAN Enabled; /* 0x0080 */
  FB_BOOLEAN EnabledOnlyForPlayers; /* 0x0081 */
  char pad_0082[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(UIObjectTagComponentData) == 144);

}
