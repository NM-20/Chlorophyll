#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856C88
   RuntimeId:        194B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0821
   VfTable:          00000001422CB4B8
   Address (Base):   00000001430E8C20
*/
#pragma pack(push, 8)
class UIGraphAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class UINodeData) Nodes; /* 0x0018 */
  FB_HANDLE(class GlobalNode) GlobalNode; /* 0x0020 */
  FB_REFARRAY(class UINodeConnection) Connections; /* 0x0028 */
  FB_HANDLE(class UIAudioEventAsset) AudioEventMappings; /* 0x0030 */
  FB_CSTRING BundleAssetName; /* 0x0038 */
  FB_REFARRAY(class UIEventAsset) EventList; /* 0x0040 */
  FB_BOOLEAN ProtectScreens; /* 0x0048 */
  FB_BOOLEAN Modal; /* 0x0049 */
  FB_BOOLEAN IsWin32UIGraphAsset; /* 0x004A */
  FB_BOOLEAN IsXenonUIGraphAsset; /* 0x004B */
  FB_BOOLEAN IsPs3UIGraphAsset; /* 0x004C */
  FB_BOOLEAN IsGen4aUIGraphAsset; /* 0x004D */
  FB_BOOLEAN IsGen4bUIGraphAsset; /* 0x004E */
  FB_BOOLEAN IsAndroidUIGraphAsset; /* 0x004F */
  FB_BOOLEAN IsiOSUIGraphAsset; /* 0x0050 */
  FB_BOOLEAN IsOSXUIGraphAsset; /* 0x0051 */
  FB_BOOLEAN IsLinuxUIGraphAsset; /* 0x0052 */
  char pad_0053[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIGraphAsset) == 88);

}
