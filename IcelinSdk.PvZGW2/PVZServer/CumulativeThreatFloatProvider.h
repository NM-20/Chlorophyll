#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeFloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F698
   RuntimeId:        1DAD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10CD
   VfTable:          000000014231D818
   Address (Base):   000000014310A530
*/
#pragma pack(push, 8)
class CumulativeThreatFloatProvider : public PVZBTreeFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(CumulativeThreatFloatProvider) == 16);

}
