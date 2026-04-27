#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BBF0
   RuntimeId:        0FBC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A7A
   VfTable:          00000001422681B0
   Address (Base):   0000000143113050
*/
#pragma pack(push, 16)
class PrintDebugTextEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 TextColor; /* 0x0020 */
  FB_CSTRING Text; /* 0x0030 */
  Vec2 ScreenPosition; /* 0x0038 */
  FB_FLOAT32 TimeToShow; /* 0x0040 */
  FB_FLOAT32 TextScale; /* 0x0044 */
  FB_BOOLEAN Enabled; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PrintDebugTextEntityData) == 80);

}
