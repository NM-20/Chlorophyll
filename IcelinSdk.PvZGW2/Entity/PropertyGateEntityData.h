#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B220
   RuntimeId:        089B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ACD
   VfTable:          000000014220B430
   Address (Base):   00000001430EF760
*/
#pragma pack(push, 16)
class PropertyGateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Vec3In; /* 0x0020 */
  Vec4 Vec4In; /* 0x0030 */
  LinearTransform TransformIn; /* 0x0040 */
  FB_INT32 IntIn; /* 0x0080 */
  FB_UINT32 UIntIn; /* 0x0084 */
  FB_CSTRING StringIn; /* 0x0088 */
  FB_FLOAT32 FloatIn; /* 0x0090 */
  FB_BOOLEAN Default; /* 0x0094 */
  FB_BOOLEAN WritePropertyOnOpenGate; /* 0x0095 */
  FB_BOOLEAN IsOpen; /* 0x0096 */
  FB_BOOLEAN BoolIn; /* 0x0097 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PropertyGateEntityData) == 160);

}
