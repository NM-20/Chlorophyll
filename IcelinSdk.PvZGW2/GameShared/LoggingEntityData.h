#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BE70
   RuntimeId:        0FE2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD5
   VfTable:          0000000142267F90
   Address (Base):   00000001430ED120
*/
#pragma pack(push, 16)
class LoggingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Strings; /* 0x0018 */
  LinearTransform TransformValue; /* 0x0020 */
  Vec3 Vec3Value; /* 0x0060 */
  Realm Realm; /* 0x0070 */
  FB_FLOAT32 FloatValue; /* 0x0074 */
  FB_INT32 IntValue; /* 0x0078 */
  Vec2 Vec2Value; /* 0x007C */
  FB_BOOLEAN BoolValue; /* 0x0084 */
  char pad_0085[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(LoggingEntityData) == 144);

}
