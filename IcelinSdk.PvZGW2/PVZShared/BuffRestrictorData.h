#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C368
   RuntimeId:        26D8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E14
   VfTable:          0000000142366828
   Address (Base):   00000001430BD4E0
*/
#pragma pack(push, 8)
class BuffRestrictorData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BuffRestrictorData) == 16);

}
