#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BC10
   RuntimeId:        0FBE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA5
   VfTable:          00000001422681E8
   Address (Base):   0000000143112FF0
*/
#pragma pack(push, 16)
class PropertyDebugEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 TextColor; /* 0x0020 */
  Vec3 WorldPosition; /* 0x0030 */
  LinearTransform TransformValue; /* 0x0040 */
  Vec3 Vec3Value; /* 0x0080 */
  Vec4 Vec4Value; /* 0x0090 */
  Vec2 ScreenPosition; /* 0x00A0 */
  FB_CSTRING ValuePrefix; /* 0x00A8 */
  FB_FLOAT32 TextScale; /* 0x00B0 */
  FB_FLOAT32 FloatValue; /* 0x00B4 */
  FB_INT32 IntValue; /* 0x00B8 */
  FB_UINT32 UIntValue; /* 0x00BC */
  Vec2 Vec2Value; /* 0x00C0 */
  FB_CSTRING StringValue; /* 0x00C8 */
  FB_BOOLEAN Multiline; /* 0x00D0 */
  FB_BOOLEAN ShowTransformInWorld; /* 0x00D1 */
  FB_BOOLEAN ShowTransformCoordinates; /* 0x00D2 */
  FB_BOOLEAN DefaultVisible; /* 0x00D3 */
  char pad_00D4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(PropertyDebugEntityData) == 224);

}
