#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849520
   RuntimeId:        0D92
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE7
   VfTable:          0000000142260028
   Address (Base):   00000001431145B0
*/
#pragma pack(push, 8)
class MessageEntityInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(MessageEntityInfo) == 16);

}
