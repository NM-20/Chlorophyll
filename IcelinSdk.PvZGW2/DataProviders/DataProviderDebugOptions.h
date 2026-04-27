#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834B38
   RuntimeId:        0240
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BC400
   Default Value:    0000000142834B50
*/
#pragma pack(push, 8)
struct DataProviderDebugOptions
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Who; /* 0x0000 */
  FB_INT32 ContextIndex; /* 0x0008 */
  Realm Realm; /* 0x000C */
  FB_CSTRING DebugName; /* 0x0010 */
  Vec2 ScreenPosition; /* 0x0018 */
  FB_BOOLEAN Log; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DataProviderDebugOptions) == 40);

}
