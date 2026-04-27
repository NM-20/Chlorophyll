#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428336E8
   RuntimeId:        0129
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E98
   VfTable:          00000001421E5128
   Address (Base):   00000001430DCFB0
*/
#pragma pack(push, 8)
class ThreadSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ProcessorCount; /* 0x0010 */
  FB_INT32 MaxProcessorCount; /* 0x0014 */
  FB_INT32 MaxLiveEditProcessorCount; /* 0x0018 */
  FB_INT32 MinFreeProcessorCount; /* 0x001C */
  FB_INT32 JobThreadPriority; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ThreadSettings) == 40);

}
