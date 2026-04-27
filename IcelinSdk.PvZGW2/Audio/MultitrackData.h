#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837DB0
   RuntimeId:        0550
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1189
   VfTable:          00000001421F9AF8
   Address (Base):   0000000143117370
*/
#pragma pack(push, 8)
class MultitrackData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MusicParameterData) LayerControlParameter; /* 0x0010 */
  FB_HANDLE(class SynchedFadeData) RangeFade; /* 0x0018 */
  FB_REFARRAY(class MultitrackLayerData) Layers; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MultitrackData) == 40);

}
