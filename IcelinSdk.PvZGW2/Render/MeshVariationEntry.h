#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852D90
   RuntimeId:        15FE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE2
   VfTable:          00000001422A1708
   Address (Base):   000000014310E5B0
*/
#pragma pack(push, 8)
class MeshVariationEntry : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING VariationName; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MeshVariationEntry) == 24);

}
