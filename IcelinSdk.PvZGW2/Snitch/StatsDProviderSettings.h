#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428749F8
   RuntimeId:        2C73
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D6
   VfTable:          000000014238AA80
   Address (Base):   0000000143103F30
*/
#pragma pack(push, 8)
class StatsDProviderSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Url; /* 0x0020 */
  FB_FLOAT32 SnapshotRefreshFrequency; /* 0x0028 */
  FB_BOOLEAN Enabled; /* 0x002C */
  FB_BOOLEAN KeyConflictDetection; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(StatsDProviderSettings) == 48);

}
