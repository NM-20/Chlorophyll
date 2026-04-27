#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AB48
   RuntimeId:        082F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA0
   VfTable:          000000014220BE90
   Address (Base):   00000001430F08A0
*/
#pragma pack(push, 8)
class Or4EntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN In1; /* 0x001C */
  FB_BOOLEAN In2; /* 0x001D */
  FB_BOOLEAN In3; /* 0x001E */
  FB_BOOLEAN In4; /* 0x001F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(Or4EntityData) == 32);

}
