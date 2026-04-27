#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/LocalPlayerViewId.h>
#include <IcelinSdk.PvZGW2/GameShared/ViewDefinitionType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DB08
   RuntimeId:        1165
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9068
   Default Value:    000000014284DB20
*/
#pragma pack(push, 4)
struct ViewDefinition
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LocalPlayerViewId ViewId; /* 0x0000 */
  ViewDefinitionType ViewType; /* 0x0004 */
  FB_UINT32 ScreenIndex; /* 0x0008 */
  FB_FLOAT32 OffsetX; /* 0x000C */
  FB_FLOAT32 OffsetY; /* 0x0010 */
  FB_FLOAT32 Width; /* 0x0014 */
  FB_FLOAT32 Height; /* 0x0018 */
  FB_FLOAT32 FovScale; /* 0x001C */
  FB_BOOLEAN NormalizedSize; /* 0x0020 */
  char pad_0021[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0024 */
#pragma pack(pop)

static_assert(sizeof(ViewDefinition) == 36);

}
