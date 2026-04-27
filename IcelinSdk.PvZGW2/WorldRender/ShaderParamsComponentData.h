#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855EA8
   RuntimeId:        18A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D7B
   VfTable:          00000001422C4FA8
   Address (Base):   00000001430E9220
*/
#pragma pack(push, 16)
class ShaderParamsComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 Value; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  char pad_0094[0x0004];
  FB_CSTRING ParameterName; /* 0x0098 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ShaderParamsComponentData) == 160);

}
