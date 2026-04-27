#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AD40
   RuntimeId:        084D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC3
   VfTable:          000000014220BC48
   Address (Base):   00000001430F0540
*/
#pragma pack(push, 8)
class SelectEventEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 Selected; /* 0x001C */
  FB_STDARRAY(FB_CSTRING) Events; /* 0x0020 */
  FB_BOOLEAN TriggerOnPropertyChanged; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SelectEventEntityData) == 48);

}
