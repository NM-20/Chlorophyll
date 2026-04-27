#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862A70
   RuntimeId:        20AC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E4E
   VfTable:          0000000142354230
   Address (Base):   0000000143108670
*/
#pragma pack(push, 8)
class SoldierAutoAimData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct AutoAimData) Poses; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SoldierAutoAimData) == 24);

}
