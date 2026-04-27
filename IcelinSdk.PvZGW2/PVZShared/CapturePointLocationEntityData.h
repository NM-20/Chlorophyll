#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428659D8
   RuntimeId:        2313
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A43
   VfTable:          0000000142350FF8
   Address (Base):   00000001430E72A0
*/
#pragma pack(push, 8)
class CapturePointLocationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CaptureTime; /* 0x0018 */
  FB_FLOAT32 DefendTime; /* 0x001C */
  FB_FLOAT32 FirstContribution; /* 0x0020 */
  FB_FLOAT32 AdditionalContribution; /* 0x0024 */
  FB_FLOAT32 MaxPointContribution; /* 0x0028 */
  FB_INT32 HumanAttackerCount; /* 0x002C */
  FB_INT32 HumanDefenderCount; /* 0x0030 */
  FB_INT32 AiAttackerCount; /* 0x0034 */
  FB_INT32 AiDefenderCount; /* 0x0038 */
  FB_BOOLEAN InstantCaptureEnabled; /* 0x003C */
  FB_BOOLEAN Enabled; /* 0x003D */
  char pad_003E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(CapturePointLocationEntityData) == 64);

}
