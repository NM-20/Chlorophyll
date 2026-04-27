#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428345F8
   RuntimeId:        01EC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1073
   VfTable:          00000001421ECE50
   Address (Base):   000000014311BED0
*/
#pragma pack(push, 8)
class BoolProvider_Automatic : public BoolProvider
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

static_assert(sizeof(BoolProvider_Automatic) == 32);

}
