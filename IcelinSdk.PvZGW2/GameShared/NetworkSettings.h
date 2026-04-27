#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849CA8
   RuntimeId:        0E04
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD0
   VfTable:          000000014225F738
   Address (Base):   00000001430B4720
*/
#pragma pack(push, 8)
class NetworkSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ProtocolVersion; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING TitleId; /* 0x0018 */
  FB_UINT32 ClientPort; /* 0x0020 */
  FB_UINT32 ServerPort; /* 0x0024 */
  FB_UINT32 MaxGhostCount; /* 0x0028 */
  FB_UINT32 MaxClientToServerGhostCount; /* 0x002C */
  FB_UINT32 MaxClientCount; /* 0x0030 */
  FB_UINT32 MaxClientFrameSize; /* 0x0034 */
  FB_UINT32 MaxServerFrameSize; /* 0x0038 */
  char pad_003C[0x0004];
  FB_CSTRING XlspAddress; /* 0x0040 */
  FB_CSTRING ServerAddress; /* 0x0048 */
  FB_CSTRING ClientConnectionDebugFilePrefix; /* 0x0050 */
  FB_CSTRING ServerConnectionDebugFilePrefix; /* 0x0058 */
  FB_FLOAT32 SinglePlayerTimeNudgeGhostFrequencyFactor; /* 0x0060 */
  FB_FLOAT32 SinglePlayerTimeNudgeBias; /* 0x0064 */
  FB_FLOAT32 SinglePlayerTimeNudge; /* 0x0068 */
  FB_FLOAT32 SinglePlayerTimeNudgeSmoothingTime; /* 0x006C */
  FB_FLOAT32 SinglePlayerLatencyFactor; /* 0x0070 */
  FB_FLOAT32 MemorySocketTimeNudgeGhostFrequencyFactor; /* 0x0074 */
  FB_FLOAT32 MemorySocketTimeNudgeBias; /* 0x0078 */
  FB_FLOAT32 MemorySocketTimeNudge; /* 0x007C */
  FB_FLOAT32 MemorySocketTimeNudgeSmoothingTime; /* 0x0080 */
  FB_FLOAT32 MemorySocketLatencyFactor; /* 0x0084 */
  FB_FLOAT32 LocalHostTimeNudgeGhostFrequencyFactor; /* 0x0088 */
  FB_FLOAT32 LocalHostTimeNudgeBias; /* 0x008C */
  FB_FLOAT32 LocalHostTimeNudge; /* 0x0090 */
  FB_FLOAT32 LocalHostTimeNudgeSmoothingTime; /* 0x0094 */
  FB_FLOAT32 LocalHostLatencyFactor; /* 0x0098 */
  FB_FLOAT32 DefaultTimeNudgeGhostFrequencyFactor; /* 0x009C */
  FB_FLOAT32 DefaultTimeNudgeBias; /* 0x00A0 */
  FB_FLOAT32 DefaultTimeNudge; /* 0x00A4 */
  FB_FLOAT32 DefaultTimeNudgeSmoothingTime; /* 0x00A8 */
  FB_FLOAT32 DefaultLatencyFactor; /* 0x00AC */
  FB_FLOAT32 ConnectTimeout; /* 0x00B0 */
  FB_FLOAT32 PacketLossLogInterval; /* 0x00B4 */
  FB_UINT32 ValidLocalPlayersMask; /* 0x00B8 */
  FB_UINT32 DesiredLocalPlayersMask; /* 0x00BC */
  FB_UINT32 PersistentLocalPlayersMask; /* 0x00C0 */
  FB_BOOLEAN SinglePlayerUserFrequencyFactorOverride; /* 0x00C4 */
  FB_BOOLEAN SinglePlayerAutomaticTimeNudge; /* 0x00C5 */
  FB_BOOLEAN MemorySocketUserFrequencyFactorOverride; /* 0x00C6 */
  FB_BOOLEAN MemorySocketAutomaticTimeNudge; /* 0x00C7 */
  FB_BOOLEAN LocalHostUserFrequencyFactorOverride; /* 0x00C8 */
  FB_BOOLEAN LocalHostAutomaticTimeNudge; /* 0x00C9 */
  FB_BOOLEAN DefaultUserFrequencyFactorOverride; /* 0x00CA */
  FB_BOOLEAN DefaultAutomaticTimeNudge; /* 0x00CB */
  FB_BOOLEAN IncrementServerPortOnFail; /* 0x00CC */
  FB_BOOLEAN UseFrameManager; /* 0x00CD */
  FB_BOOLEAN TimeSyncEnabled; /* 0x00CE */
  FB_BOOLEAN MLUREnabled; /* 0x00CF */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(NetworkSettings) == 208);

}
