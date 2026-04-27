#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/RawFileAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A438
   RuntimeId:        0E74
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          064F
   VfTable:          000000014225F3A0
   Address (Base):   0000000143113D70
*/
#pragma pack(push, 8)
class RawFileResourceAsset : public RawFileAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF Resource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RawFileResourceAsset) == 32);

}
