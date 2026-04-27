#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836830
   RuntimeId:        03FF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0954
   VfTable:          00000001421F4A88
   Address (Base):   0000000143118810
*/
#pragma pack(push, 8)
class SoundTestTask : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SoundTestTaskSpec) Spec; /* 0x0010 */
  FB_HANDLE(class SoundTestTaskParam) Param; /* 0x0018 */
  FB_FLOAT32 StartTime; /* 0x0020 */
  FB_UINT32 Repetitions; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SoundTestTask) == 40);

}
