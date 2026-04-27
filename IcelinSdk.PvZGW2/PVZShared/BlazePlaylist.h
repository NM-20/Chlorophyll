#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014286F108
   RuntimeId:        28CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC9
   VfTable:          000000014236E410
   Address (Base):   00000001431054F0
*/
#pragma pack(push, 8)
class BlazePlaylist : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BlazePlaylist) == 16);

}
