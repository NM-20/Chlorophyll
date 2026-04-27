#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryStreamFormat.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryTransactionMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875510
   RuntimeId:        2D06
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0679
   VfTable:          000000014238C868
   Address (Base):   00000001430F4F30
*/
#pragma pack(push, 8)
class TransactionalTelemetryStreamFormat : public TelemetryStreamFormat
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TelemetryTransactionMode TransactionMode; /* 0x0018 */
  FB_BOOLEAN Autocommit; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TransactionalTelemetryStreamFormat) == 32);

}
