#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIUpdateType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875A70
   RuntimeId:        2D40
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0750
   VfTable:          000000014238D8A8
   Address (Base):   00000001430BDCB0
*/
#pragma pack(push, 8)
class UIComponentData : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ShortName; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) DataSources; /* 0x0020 */
  FB_INT32 UpdatesPerSecond; /* 0x0028 */
  UIUpdateType UpdateType; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIComponentData) == 48);

}
