#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874A18
   RuntimeId:        2C75
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C3
   VfTable:          000000014238AA70
   Address (Base):   0000000143103ED0
*/
#pragma pack(push, 8)
class DistroProviderSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Url; /* 0x0020 */
  FB_FLOAT32 SnapshotRefreshFrequency; /* 0x0028 */
  FB_BOOLEAN Enabled; /* 0x002C */
  FB_BOOLEAN GzipCompression; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DistroProviderSettings) == 48);

}
