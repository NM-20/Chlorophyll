#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/PA2LookAtGameStateSetting.h>

namespace fb
{

/* TypeInfo (Array): 00000001428404B8
   RuntimeId:        0AD9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E12
   VfTable:          0000000142232810
   Address (Base):   00000001430FD8D0
*/
#pragma pack(push, 8)
class PA2FloatLookAtGameStateSetting : public PA2LookAtGameStateSetting
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PA2FloatLookAtGameStateSetting) == 48);

}
