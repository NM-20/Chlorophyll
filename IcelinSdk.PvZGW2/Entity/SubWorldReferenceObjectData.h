#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ReferenceObjectData.h>
#include <IcelinSdk.PvZGW2/Entity/BundleHeapInfo.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C478
   RuntimeId:        09B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0990
   VfTable:          0000000142213670
   Address (Base):   00000001430BD030
*/
#pragma pack(push, 16)
class SubWorldReferenceObjectData : public ReferenceObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING BundleName; /* 0x0090 */
  FB_STDARRAY(FB_CSTRING) PreloadedBundleNames; /* 0x0098 */
  BundleHeapInfo BundleHeap; /* 0x00A0 */
  char pad_00AC[0x0004];
  FB_HANDLE(class SubWorldInclusionSettings) InclusionSettings; /* 0x00B0 */
  FB_BOOLEAN AutoLoad; /* 0x00B8 */
  FB_BOOLEAN IsWin32SubLevel; /* 0x00B9 */
  FB_BOOLEAN IsXenonSubLevel; /* 0x00BA */
  FB_BOOLEAN IsPs3SubLevel; /* 0x00BB */
  FB_BOOLEAN IsGen4aSubLevel; /* 0x00BC */
  FB_BOOLEAN IsGen4bSubLevel; /* 0x00BD */
  FB_BOOLEAN IsIOSSubLevel; /* 0x00BE */
  FB_BOOLEAN IsAndroidSubLevel; /* 0x00BF */
  FB_BOOLEAN IsOSXSubLevel; /* 0x00C0 */
  FB_BOOLEAN IsLinuxSubLevel; /* 0x00C1 */
  char pad_00C2[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(SubWorldReferenceObjectData) == 208);

}
