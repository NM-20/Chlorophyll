#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/Vector3Provider.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderDebugOptions.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834BE0
   RuntimeId:        0248
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10AC
   VfTable:          00000001421ECA48
   Address (Base):   000000014311B2D0
*/
#pragma pack(push, 8)
class Vector3Provider_ShowDebug : public Vector3Provider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class Vector3Provider) Param; /* 0x0010 */
  DataProviderDebugOptions Options; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(Vector3Provider_ShowDebug) == 64);

}
