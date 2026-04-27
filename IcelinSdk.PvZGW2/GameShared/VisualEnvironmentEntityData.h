#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/VisualEnvironmentBlendMode.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EE40
   RuntimeId:        1267
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B08
   VfTable:          0000000142274850
   Address (Base):   00000001430EC0A0
*/
#pragma pack(push, 16)
class VisualEnvironmentEntityData : public GameComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Visibility; /* 0x0080 */
  FB_INT32 Priority; /* 0x0084 */
  VisualEnvironmentBlendMode BlendMode; /* 0x0088 */
  FB_BOOLEAN ExplicitPriorityEnable; /* 0x008C */
  char pad_008D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(VisualEnvironmentEntityData) == 144);

}
