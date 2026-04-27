#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853020
   RuntimeId:        1626
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D7F
   VfTable:          00000001422A14C0
   Address (Base):   00000001430EA900
*/
#pragma pack(push, 16)
class DebugComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  char pad_0084[0x0004];
  FB_HANDLE(class TextureAsset) DebugTexture; /* 0x0088 */
  FB_BOOLEAN Enable; /* 0x0090 */
  FB_BOOLEAN Fullscreen; /* 0x0091 */
  char pad_0092[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(DebugComponentData) == 160);

}
