#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F3B0
   RuntimeId:        12B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11CB
   VfTable:          0000000142276740
   Address (Base):   00000001430FC910
*/
#pragma pack(push, 8)
class PosesConfiguration : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PosesGlobalAsset) PosesGlobalAsset; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PosesConfiguration) == 40);

}
