#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868990
   RuntimeId:        240D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11D3
   VfTable:          000000014234E990
   Address (Base):   00000001430F8650
*/
#pragma pack(push, 8)
class PVZDedicatedServerSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PersistenceConfiguration) PersistenceConfig; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZDedicatedServerSettings) == 40);

}
