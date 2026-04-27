#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428355B8
   RuntimeId:        02E4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B8
   VfTable:          00000001421EFA78
   Address (Base):   0000000143119A10
*/
#pragma pack(push, 8)
class AntProjectAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING AntNativeProjectName; /* 0x0018 */
  AntRef SceneOp; /* 0x0020 */
  FB_INT32 ProjectId; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AntProjectAsset) == 56);

}
