#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873238
   RuntimeId:        2B96
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E3B
   VfTable:          0000000142379520
   Address (Base):   0000000143104AD0
*/
#pragma pack(push, 8)
class MovementStyleData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MoverTuneOverride) Walking; /* 0x0010 */
  FB_HANDLE(class MoverTuneOverride) Running; /* 0x0018 */
  FB_HANDLE(class MoverTuneOverride) Sprinting; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MovementStyleData) == 40);

}
