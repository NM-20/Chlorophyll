#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIGameGroupStatus.h>

namespace fb
{

/* TypeInfo (Array): 00000001428713C8
   RuntimeId:        2A4B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          110A
   VfTable:          000000014236CA78
   Address (Base):   00000001430D8F30
*/
#pragma pack(push, 8)
class PVZUIGameGroupInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZUIGameGroupStatus GameGroupInfo; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZUIGameGroupInfo) == 96);

}
