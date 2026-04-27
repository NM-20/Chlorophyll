#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836710
   RuntimeId:        03ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FCA
   VfTable:          00000001421F4AF8
   Address (Base):   0000000143118A50
*/
#pragma pack(push, 8)
class StreamPoolMapping : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class StreamPoolAsset) StreamPool; /* 0x0010 */
  FB_HANDLE(class StreamPoolSetup) StreamPoolSetup; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(StreamPoolMapping) == 32);

}
