#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428759D8
   RuntimeId:        2D36
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0816
   VfTable:          000000014238D910
   Address (Base):   0000000143103090
*/
#pragma pack(push, 8)
class UIActionData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) ActionKeys; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIActionData) == 32);

}
