#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderDebugOptions.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834B80
   RuntimeId:        0242
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1072
   VfTable:          00000001421ECA90
   Address (Base):   000000014311B3F0
*/
#pragma pack(push, 8)
class BoolProvider_ShowDebug : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class BoolProvider) Param; /* 0x0010 */
  DataProviderDebugOptions Options; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_ShowDebug) == 64);

}
