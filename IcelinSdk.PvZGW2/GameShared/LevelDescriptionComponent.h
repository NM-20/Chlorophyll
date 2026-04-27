#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142848E68
   RuntimeId:        0D30
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF4
   VfTable:          00000001422605C0
   Address (Base):   00000001430D7B70
*/
#pragma pack(push, 8)
class LevelDescriptionComponent : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LevelDescriptionComponent) == 16);

}
