#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868F30
   RuntimeId:        2445
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1282
   VfTable:          0000000142356050
   Address (Base):   0000000143107950
*/
#pragma pack(push, 8)
class UnlockAssetRef : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 UnlockIdentifier; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UnlockAssetRef) == 24);

}
