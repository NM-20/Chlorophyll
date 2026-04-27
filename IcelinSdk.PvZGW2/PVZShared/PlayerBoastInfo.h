#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864E38
   RuntimeId:        2260
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF0
   VfTable:          0000000142351C68
   Address (Base):   00000001430DA670
*/
#pragma pack(push, 8)
class PlayerBoastInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ScoreBoastInfo) Boasts; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PlayerBoastInfo) == 24);

}
