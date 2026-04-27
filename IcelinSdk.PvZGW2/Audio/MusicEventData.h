#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicInputData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837C90
   RuntimeId:        053E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F6
   VfTable:          00000001421F9B78
   Address (Base):   0000000143117550
*/
#pragma pack(push, 8)
class MusicEventData : public MusicInputData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MusicEventData) == 32);

}
