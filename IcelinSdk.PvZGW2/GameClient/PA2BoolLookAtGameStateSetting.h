#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/PA2LookAtGameStateSetting.h>

namespace fb
{

/* TypeInfo (Array): 0000000142840498
   RuntimeId:        0AD7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E13
   VfTable:          0000000142232830
   Address (Base):   00000001430FD930
*/
#pragma pack(push, 8)
class PA2BoolLookAtGameStateSetting : public PA2LookAtGameStateSetting
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN Value; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PA2BoolLookAtGameStateSetting) == 48);

}
