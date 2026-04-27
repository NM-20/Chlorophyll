#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876B78
   RuntimeId:        2E17
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1293
   VfTable:          0000000142392E30
   Address (Base):   00000001430D2C50
*/
#pragma pack(push, 8)
class PropertyWrapper : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0010[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PropertyWrapper) == 32);

}
