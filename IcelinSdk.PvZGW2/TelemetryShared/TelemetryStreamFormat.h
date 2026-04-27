#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875470
   RuntimeId:        2CFC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0678
   VfTable:          000000014238C888
   Address (Base):   00000001430E1240
*/
#pragma pack(push, 8)
class TelemetryStreamFormat : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TelemetryStreamFormat) == 24);

}
