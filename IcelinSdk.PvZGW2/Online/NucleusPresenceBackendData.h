#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858B70
   RuntimeId:        1A7F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A7
   VfTable:          00000001422D5760
   Address (Base):   000000014310CB10
*/
#pragma pack(push, 8)
class NucleusPresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING PsnClientId; /* 0x0018 */
  FB_STDARRAY(struct NucleusPlatformConfiguration) Platforms; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(NucleusPresenceBackendData) == 40);

}
