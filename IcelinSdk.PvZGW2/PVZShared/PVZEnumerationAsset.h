#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865C58
   RuntimeId:        233B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          069F
   VfTable:          0000000142350AF0
   Address (Base):   0000000143107EF0
*/
#pragma pack(push, 8)
class PVZEnumerationAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Entries; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZEnumerationAsset) == 32);

}
