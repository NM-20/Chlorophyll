#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BC70
   RuntimeId:        0FC4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E5A
   VfTable:          00000001422681A0
   Address (Base):   00000001430D70F0
*/
#pragma pack(push, 8)
class MovementActionData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MovementActionData) == 16);

}
