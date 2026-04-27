#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857E20
   RuntimeId:        19AC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E55
   VfTable:          00000001422D3458
   Address (Base):   00000001430BFA10
*/
#pragma pack(push, 8)
class NickelStore : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct NickelItem) Items; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NickelStore) == 24);

}
