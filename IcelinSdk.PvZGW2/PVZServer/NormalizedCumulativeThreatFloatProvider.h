#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeFloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F6B8
   RuntimeId:        1DAF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10CE
   VfTable:          000000014231D7F8
   Address (Base):   000000014310A4D0
*/
#pragma pack(push, 8)
class NormalizedCumulativeThreatFloatProvider : public PVZBTreeFloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) MaxValue; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NormalizedCumulativeThreatFloatProvider) == 24);

}
