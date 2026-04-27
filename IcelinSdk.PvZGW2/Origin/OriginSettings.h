#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859390
   RuntimeId:        1B0A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11BD
   VfTable:          00000001422DB578
   Address (Base):   00000001430B79A0
*/
#pragma pack(push, 8)
class OriginSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ContentId; /* 0x0020 */
  FB_CSTRING Title; /* 0x0028 */
  FB_CSTRING MultiplayerId; /* 0x0030 */
  FB_CSTRING Language; /* 0x0038 */
  FB_BOOLEAN Enabled; /* 0x0040 */
  FB_BOOLEAN RequiredForOnline; /* 0x0041 */
  FB_BOOLEAN Log; /* 0x0042 */
  FB_BOOLEAN AllowProductionEnvironment; /* 0x0043 */
  FB_BOOLEAN DisableInLiveEditMode; /* 0x0044 */
  FB_BOOLEAN IsOriginEnvProd; /* 0x0045 */
  char pad_0046[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(OriginSettings) == 72);

}
