#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C2E0
   RuntimeId:        09A0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB780
   Default Value:    000000014283C300
*/
#pragma pack(push, 8)
struct LevelSetup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_STDARRAY(struct LevelSetupOption) InclusionOptions; /* 0x0008 */
  FB_UINT32 DifficultyIndex; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING StartPoint; /* 0x0018 */
  FB_CSTRING Playlist; /* 0x0020 */
  FB_CSTRING LoadScreen_GameMode; /* 0x0028 */
  FB_CSTRING LoadScreen_LevelName; /* 0x0030 */
  FB_CSTRING LoadScreen_LevelDescription; /* 0x0038 */
  FB_CSTRING LoadScreen_LevelAsset; /* 0x0040 */
  FB_BOOLEAN IsSaveGame; /* 0x0048 */
  FB_BOOLEAN HasPersistentSave; /* 0x0049 */
  FB_BOOLEAN ForceReloadResources; /* 0x004A */
  char pad_004B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(LevelSetup) == 80);

}
