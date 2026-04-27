#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428770C0
   RuntimeId:        2E5D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FFC
   VfTable:          0000000142397C70
   Address (Base):   00000001430D8450
*/
#pragma pack(push, 8)
class ZoneStreamerSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Draw3dNameScale; /* 0x0010 */
  FB_FLOAT32 Draw2dScale; /* 0x0014 */
  FB_FLOAT32 Draw2dPointSize; /* 0x0018 */
  FB_FLOAT32 Draw2dBgAlpha; /* 0x001C */
  FB_CSTRING SelectedStreamer; /* 0x0020 */
  FB_BOOLEAN TestZoneHeights; /* 0x0028 */
  FB_BOOLEAN PinVisitedZones; /* 0x0029 */
  FB_BOOLEAN PauseAll; /* 0x002A */
  FB_BOOLEAN DrawStats; /* 0x002B */
  FB_BOOLEAN Draw3dDebug; /* 0x002C */
  FB_BOOLEAN Draw2dDebug; /* 0x002D */
  FB_BOOLEAN Draw2dZones; /* 0x002E */
  FB_BOOLEAN Draw2dRotate; /* 0x002F */
  FB_BOOLEAN Draw2dZoneStates; /* 0x0030 */
  FB_BOOLEAN Draw2dCentroids; /* 0x0031 */
  FB_BOOLEAN Draw2dNames; /* 0x0032 */
  char pad_0033[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerSettings) == 56);

}
