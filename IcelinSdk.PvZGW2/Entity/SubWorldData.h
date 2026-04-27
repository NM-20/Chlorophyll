#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialPrefabBlueprint.h>
#include <IcelinSdk.PvZGW2/Entity/BlueprintPersistenceSetting.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C438
   RuntimeId:        09B0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0790
   VfTable:          00000001422136B0
   Address (Base):   00000001430B77B0
*/
#pragma pack(push, 8)
class SubWorldData : public SpatialPrefabBlueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MaterialGridData) RuntimeMaterialGrid; /* 0x0050 */
  BlueprintPersistenceSetting PersistenceSetting; /* 0x0058 */
  char pad_005C[0x0004];
  FB_HANDLE(class AutoAssetCollector) AutoAssetCollector; /* 0x0060 */
  FB_BOOLEAN IsWin32SubLevel; /* 0x0068 */
  FB_BOOLEAN IsXenonSubLevel; /* 0x0069 */
  FB_BOOLEAN IsPs3SubLevel; /* 0x006A */
  FB_BOOLEAN IsGen4aSubLevel; /* 0x006B */
  FB_BOOLEAN IsGen4bSubLevel; /* 0x006C */
  FB_BOOLEAN IsAndroidSubLevel; /* 0x006D */
  FB_BOOLEAN IsIOSSubLevel; /* 0x006E */
  FB_BOOLEAN IsOSXSubLevel; /* 0x006F */
  FB_BOOLEAN IsLinuxSubLevel; /* 0x0070 */
  char pad_0071[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(SubWorldData) == 120);

}
