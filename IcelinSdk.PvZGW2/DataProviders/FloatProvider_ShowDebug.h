#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderDebugOptions.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834BA0
   RuntimeId:        0244
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C3
   VfTable:          00000001421ECA78
   Address (Base):   000000014311B390
*/
#pragma pack(push, 8)
class FloatProvider_ShowDebug : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Param; /* 0x0010 */
  DataProviderDebugOptions Options; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_ShowDebug) == 64);

}
