#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E008
   RuntimeId:        11AD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ECF
   VfTable:          0000000142273598
   Address (Base):   0000000143111730
*/
#pragma pack(push, 8)
class PartLinkData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 PartComponentIndex1; /* 0x0010 */
  FB_UINT32 PartComponentIndex2; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PartLinkData) == 24);

}
