#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A5D8
   RuntimeId:        0E8E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0652
   VfTable:          0000000142266618
   Address (Base):   0000000143113D10
*/
#pragma pack(push, 8)
class DifficultyDatas : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class DifficultyData) Difficulties; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DifficultyDatas) == 32);

}
