#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857EB8
   RuntimeId:        19B8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          081A
   VfTable:          00000001422D5168
   Address (Base):   00000001430FA7B0
*/
#pragma pack(push, 8)
class OnlinePlatformData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(OnlinePlatformData) == 24);

}
