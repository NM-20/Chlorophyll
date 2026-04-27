#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836850
   RuntimeId:        0401
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0953
   VfTable:          00000001421F4A78
   Address (Base):   00000001431187B0
*/
#pragma pack(push, 8)
class SoundTestSpec : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_CSTRING Description; /* 0x0018 */
  FB_HANDLE(class SoundTestTask) MainStartTask; /* 0x0020 */
  FB_HANDLE(class SoundTestTask) MainStopTask; /* 0x0028 */
  FB_FLOAT32 Duration; /* 0x0030 */
  char pad_0034[0x0004];
  FB_REFARRAY(class SoundTestTask) Tasks; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(SoundTestSpec) == 64);

}
