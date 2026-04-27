#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871290
   RuntimeId:        2A3F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C4D
   VfTable:          000000014236CC98
   Address (Base):   00000001430E37C0
*/
#pragma pack(push, 8)
class UIMemcardEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ProfileOptionData) Option; /* 0x0018 */
  FB_INT32 OptionInt; /* 0x0020 */
  FB_FLOAT32 OptionFloat; /* 0x0024 */
  FB_CSTRING OptionString; /* 0x0028 */
  FB_BOOLEAN OptionBool; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIMemcardEntityData) == 56);

}
