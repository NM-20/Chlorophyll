#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/PVZShared/InputRestrictionState.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863780
   RuntimeId:        211E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0717
   VfTable:          0000000142353890
   Address (Base):   0000000143108430
*/
#pragma pack(push, 8)
class InputRestrictionAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  InputRestrictionState RestrictedState; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputRestrictionAsset) == 40);

}
