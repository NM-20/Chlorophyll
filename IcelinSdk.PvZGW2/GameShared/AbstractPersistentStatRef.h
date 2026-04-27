#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849E98
   RuntimeId:        0E20
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E76
   VfTable:          000000014225F678
   Address (Base):   00000001430DC590
*/
#pragma pack(push, 8)
class AbstractPersistentStatRef : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AbstractPersistentStatRef) == 16);

}
