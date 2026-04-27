#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834618
   RuntimeId:        01EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10D4
   VfTable:          00000001421ECE30
   Address (Base):   000000014311BE70
*/
#pragma pack(push, 8)
class FloatProvider_Automatic : public FloatProvider
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

static_assert(sizeof(FloatProvider_Automatic) == 32);

}
