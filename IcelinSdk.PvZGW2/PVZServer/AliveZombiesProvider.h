#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeIntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F718
   RuntimeId:        1DB5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10B9
   VfTable:          000000014231D798
   Address (Base):   000000014310A410
*/
#pragma pack(push, 8)
class AliveZombiesProvider : public PVZBTreeIntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AliveZombiesProvider) == 16);

}
