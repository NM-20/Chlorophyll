#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GamePlatform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857F98
   RuntimeId:        19C2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C6F88
   Default Value:    0000000142857FB0
*/
#pragma pack(push, 8)
struct OnlineProviderConfiguration
{
  typedef struct ValueTypeInfo TypeInfo_t;

  GamePlatform Platform; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING ServiceName; /* 0x0008 */
  FB_CSTRING Client; /* 0x0010 */
  FB_CSTRING SKU; /* 0x0018 */
  FB_CSTRING Version; /* 0x0020 */
  FB_UINT32 ServerSocketPacketSize; /* 0x0028 */
  FB_BOOLEAN IsServer; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(OnlineProviderConfiguration) == 48);

}
