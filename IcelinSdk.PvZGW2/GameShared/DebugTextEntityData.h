#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BAD0
   RuntimeId:        0FAA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B82
   VfTable:          0000000142268338
   Address (Base):   0000000143113290
*/
#pragma pack(push, 16)
class DebugTextEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 TextColor; /* 0x0060 */
  FB_CSTRING DebugText; /* 0x0070 */
  Realm Realm; /* 0x0078 */
  FB_FLOAT32 Scale; /* 0x007C */
  FB_BOOLEAN Centered; /* 0x0080 */
  FB_BOOLEAN Visible; /* 0x0081 */
  FB_BOOLEAN DepthTest; /* 0x0082 */
  FB_BOOLEAN ScaleWithDistance; /* 0x0083 */
  char pad_0084[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(DebugTextEntityData) == 144);

}
