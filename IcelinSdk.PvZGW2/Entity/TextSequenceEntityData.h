#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BA18
   RuntimeId:        090E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A50
   VfTable:          000000014220AAD8
   Address (Base):   00000001430F0C00
*/
#pragma pack(push, 8)
class TextSequenceEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_CSTRING) Events; /* 0x0020 */
  FB_REFARRAY(class TextSequenceItem) Items; /* 0x0028 */
  Vec2 ScreenPosition; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TextSequenceEntityData) == 56);

}
