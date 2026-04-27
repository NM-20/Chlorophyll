#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862EE0
   RuntimeId:        20D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          080A
   VfTable:          0000000142353FF8
   Address (Base):   0000000143108550
*/
#pragma pack(push, 8)
class PVZCharacterHealthComponentInputRestrictionAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_INT32) ExcludedInputActions; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterHealthComponentInputRestrictionAsset) == 32);

}
