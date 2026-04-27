#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryTransportData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875650
   RuntimeId:        2D1A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0814
   VfTable:          000000014238C828
   Address (Base):   00000001431030F0
*/
#pragma pack(push, 8)
class TelemetryCSVTransportData : public TelemetryTransportData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING FileName; /* 0x0020 */
  FB_UINT32 WritesPerFlush; /* 0x0028 */
  FB_BOOLEAN TimeStamped; /* 0x002C */
  FB_BOOLEAN OverwriteFile; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TelemetryCSVTransportData) == 48);

}
