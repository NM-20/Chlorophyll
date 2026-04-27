#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeEntityProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F5B8
   RuntimeId:        1D9F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          108E
   VfTable:          000000014231D8A8
   Address (Base):   000000014310A770
*/
#pragma pack(push, 8)
class AiTargetProvider : public PVZBTreeEntityProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AiTargetProvider) == 16);

}
