#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/UI/UISystemType.h>
#include <IcelinSdk.PvZGW2/Core/LanguageFormat.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C780
   RuntimeId:        105E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C7
   VfTable:          00000001422678A0
   Address (Base):   00000001430BD660
*/
#pragma pack(push, 8)
class UISettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UISystemType System; /* 0x0020 */
  char pad_0024[0x0004];
  FB_HANDLE(class ProfileOptionsAsset) ProfileOptions; /* 0x0028 */
  LanguageFormat Language; /* 0x0030 */
  char pad_0034[0x0004];
  FB_HANDLE(class LocalizationAsset) Localization; /* 0x0038 */
  FB_HANDLE(class UIImmediateModeFontConfigurationAsset) FontConfiguration; /* 0x0040 */
  FB_BOOLEAN DrawEnable; /* 0x0048 */
  FB_BOOLEAN EnableJobs; /* 0x0049 */
  FB_BOOLEAN ScaleformSafeMode; /* 0x004A */
  char pad_004B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UISettings) == 80);

}
