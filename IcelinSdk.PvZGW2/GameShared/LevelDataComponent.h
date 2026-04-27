#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849160
   RuntimeId:        0D56
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F94
   VfTable:          0000000142260498
   Address (Base):   0000000143114790
*/
#pragma pack(push, 8)
class LevelDataComponent : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LevelDataComponent) == 16);

}
