#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/WorldRender/EmitterParamOverride.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856008
   RuntimeId:        18B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D85
   VfTable:          00000001422C4DE8
   Address (Base):   00000001430E8F80
*/
#pragma pack(push, 16)
class EmitterParamComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  EmitterParamOverride Parameter; /* 0x0084 */
  FB_FLOAT32 Value; /* 0x0088 */
  char pad_008C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(EmitterParamComponentData) == 144);

}
