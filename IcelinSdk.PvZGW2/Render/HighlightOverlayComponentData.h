#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852FA0
   RuntimeId:        161E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D77
   VfTable:          00000001422A15C0
   Address (Base):   00000001430EAA80
*/
#pragma pack(push, 16)
class HighlightOverlayComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_BOOLEAN Enable; /* 0x0084 */
  char pad_0085[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(HighlightOverlayComponentData) == 144);

}
