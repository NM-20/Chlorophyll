#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EF78
   RuntimeId:        1D3B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          104E
   VfTable:          000000014231DED8
   Address (Base):   000000014310B9D0
*/
#pragma pack(push, 8)
class AtInterest : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Interest; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(AtInterest) == 24);

}
