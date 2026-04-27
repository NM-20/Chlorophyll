#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836430
   RuntimeId:        03BF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0950
   VfTable:          00000001421F4C38
   Address (Base):   0000000143118E10
*/
#pragma pack(push, 8)
class MixerPreset : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 NameHash; /* 0x0010 */
  char pad_0014[0x0004];
  FB_STDARRAY(struct MixerPresetGroupData) Groups; /* 0x0018 */
  FB_STDARRAY(struct MixerPresetNodeData) Nodes; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MixerPreset) == 40);

}
