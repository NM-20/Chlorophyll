#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A9E8
   RuntimeId:        0819
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06BE
   VfTable:          000000014220BFF0
   Address (Base):   0000000143115390
*/
#pragma pack(push, 8)
class DataContainerAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DataContainer) Data; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(DataContainerAsset) == 32);

}
