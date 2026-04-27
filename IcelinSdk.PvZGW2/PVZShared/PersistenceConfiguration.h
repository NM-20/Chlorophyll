#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862260
   RuntimeId:        2036
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07FC
   VfTable:          0000000142343ED8
   Address (Base):   00000001430F87D0
*/
#pragma pack(push, 8)
class PersistenceConfiguration : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PlayerTypeProfile) MPProfile; /* 0x0018 */
  FB_HANDLE(class PointSystemParamsAsset) PointSystemParams; /* 0x0020 */
  FB_HANDLE(class XdpExportAsset) XdpExport; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PersistenceConfiguration) == 48);

}
