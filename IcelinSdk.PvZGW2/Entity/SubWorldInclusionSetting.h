#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C398
   RuntimeId:        09A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E24
   VfTable:          0000000142213740
   Address (Base):   00000001430FDA50
*/
#pragma pack(push, 8)
class SubWorldInclusionSetting : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SubWorldInclusionCriterion) Criterion; /* 0x0010 */
  FB_STDARRAY(FB_CSTRING) EnabledOptions; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SubWorldInclusionSetting) == 32);

}
