#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderDebugOptions.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834C00
   RuntimeId:        024A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1094
   VfTable:          00000001421ECA30
   Address (Base):   000000014311B270
*/
#pragma pack(push, 8)
class TransformProvider_ShowDebug : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) Param; /* 0x0010 */
  DataProviderDebugOptions Options; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_ShowDebug) == 64);

}
