#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836248
   RuntimeId:        03A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0831
   VfTable:          00000001421F4CE8
   Address (Base):   0000000143118F90
*/
#pragma pack(push, 8)
class MixerEntryConfig : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AudioGraphParameter) GraphParameter; /* 0x0010 */
  FB_HANDLE(class MixerAsset) Mixer; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MixerEntryConfig) == 32);

}
