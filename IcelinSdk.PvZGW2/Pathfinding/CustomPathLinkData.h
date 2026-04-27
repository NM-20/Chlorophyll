#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850A18
   RuntimeId:        13DD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1146
   VfTable:          000000014227C598
   Address (Base):   000000014310F990
*/
#pragma pack(push, 8)
class CustomPathLinkData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(CustomPathLinkData) == 16);

}
