#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicFadeData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837D50
   RuntimeId:        054A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE4
   VfTable:          00000001421F9B28
   Address (Base):   0000000143117490
*/
#pragma pack(push, 8)
class BasicFadeData : public MusicFadeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BasicFadeData) == 40);

}
