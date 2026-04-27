#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/EventTelemetryStreamFormat.h>

namespace fb
{

/* TypeInfo (Array): 00000001428754D0
   RuntimeId:        2D02
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          067C
   VfTable:          000000014238C858
   Address (Base):   00000001430F4D50
*/
#pragma pack(push, 8)
class VariableEventStreamFormat : public EventTelemetryStreamFormat
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING mod; /* 0x0018 */
  FB_CSTRING grp; /* 0x0020 */
  FB_CSTRING subgrp; /* 0x0028 */
  FB_STDARRAY(struct TelemetryParameterDataProperty) Params; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(VariableEventStreamFormat) == 56);

}
