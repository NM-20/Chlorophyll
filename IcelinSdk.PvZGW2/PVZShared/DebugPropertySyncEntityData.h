#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865280
   RuntimeId:        22A1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B0
   VfTable:          0000000142351920
   Address (Base):   00000001430D4A50
*/
#pragma pack(push, 16)
class DebugPropertySyncEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 IntIn; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform TransformIn; /* 0x0020 */
  FB_UINT32 UIntIn; /* 0x0060 */
  FB_FLOAT32 FloatIn; /* 0x0064 */
  FB_CSTRING StringIn; /* 0x0068 */
  FB_BOOLEAN BoolIn; /* 0x0070 */
  char pad_0071[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DebugPropertySyncEntityData) == 128);

}
