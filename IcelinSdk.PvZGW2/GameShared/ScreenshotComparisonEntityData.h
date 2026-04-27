#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BBB0
   RuntimeId:        0FB8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09AC
   VfTable:          0000000142268290
   Address (Base):   0000000143113110
*/
#pragma pack(push, 8)
class ScreenshotComparisonEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 AllowedDiffPercentage; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING ScreenshotName; /* 0x0020 */
  FB_UINT32 WaitFrames; /* 0x0028 */
  FB_BOOLEAN WaitForStreaming; /* 0x002C */
  FB_BOOLEAN EnableDebugRendering; /* 0x002D */
  char pad_002E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ScreenshotComparisonEntityData) == 48);

}
