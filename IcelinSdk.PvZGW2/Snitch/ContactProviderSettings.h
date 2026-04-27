#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 00000001428749D8
   RuntimeId:        2C71
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E6
   VfTable:          000000014238AA60
   Address (Base):   0000000143103F90
*/
#pragma pack(push, 8)
class ContactProviderSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Url; /* 0x0020 */
  FB_FLOAT32 SnapshotRefreshFrequency; /* 0x0028 */
  FB_BOOLEAN Enabled; /* 0x002C */
  FB_BOOLEAN GzipCompression; /* 0x002D */
  FB_BOOLEAN KeyConflictDetection; /* 0x002E */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ContactProviderSettings) == 48);

}
