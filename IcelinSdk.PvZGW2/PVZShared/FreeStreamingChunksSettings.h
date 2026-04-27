#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861858
   RuntimeId:        1FAB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11DE
   VfTable:          00000001423443D8
   Address (Base):   00000001430F8770
*/
#pragma pack(push, 8)
class FreeStreamingChunksSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 DefaultLoadMask; /* 0x0020 */
  char pad_0024[0x0004];
  FB_STDARRAY(FB_CSTRING) SuperBundles; /* 0x0028 */
  FB_STDARRAY(struct FreeStreamingChunksLoadInfo) ChunkSuperBundles; /* 0x0030 */
  FB_STDARRAY(FB_INT32) LoadMasks; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(FreeStreamingChunksSettings) == 64);

}
