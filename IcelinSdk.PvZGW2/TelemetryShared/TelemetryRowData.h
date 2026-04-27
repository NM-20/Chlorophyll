#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428753D0
   RuntimeId:        2CF2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F6F
   VfTable:          000000014238C978
   Address (Base):   00000001430E1300
*/
#pragma pack(push, 8)
class TelemetryRowData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TelemetryRowData) == 16);

}
