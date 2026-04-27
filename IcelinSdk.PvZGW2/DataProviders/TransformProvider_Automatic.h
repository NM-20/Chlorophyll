#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834678
   RuntimeId:        01F4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          109A
   VfTable:          00000001421ECDD0
   Address (Base):   000000014311BD50
*/
#pragma pack(push, 8)
class TransformProvider_Automatic : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DataContainerType; /* 0x0010 */
  FB_CSTRING Property; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Automatic) == 32);

}
