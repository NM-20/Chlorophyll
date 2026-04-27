#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SimpleMeleeComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863D08
   RuntimeId:        216D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC4
   VfTable:          0000000142352F68
   Address (Base):   0000000143108370
*/
#pragma pack(push, 16)
class PvZSimpleMeleeComponentData : public SimpleMeleeComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PvZSimpleMeleeComponentData) == 144);

}
