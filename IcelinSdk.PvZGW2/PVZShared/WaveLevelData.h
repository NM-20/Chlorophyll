#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428736E8
   RuntimeId:        2BDE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          075C
   VfTable:          0000000142379158
   Address (Base):   0000000143104770
*/
#pragma pack(push, 8)
class WaveLevelData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class WaveComposition) WaveCompositions; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(WaveLevelData) == 32);

}
