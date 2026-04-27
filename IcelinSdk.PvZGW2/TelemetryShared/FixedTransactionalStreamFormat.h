#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TransactionalTelemetryStreamFormat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875530
   RuntimeId:        2D08
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          067A
   VfTable:          000000014238C8E8
   Address (Base):   00000001430D8690
*/
#pragma pack(push, 8)
class FixedTransactionalStreamFormat : public TransactionalTelemetryStreamFormat
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TelemetryTransactionData) ReferenceRow; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FixedTransactionalStreamFormat) == 40);

}
