#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundleSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D708
   RuntimeId:        1137
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5708
   Default Value:    000000014284D720
*/
#pragma pack(push, 8)
struct BlueprintBundleReference
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  BlueprintBundleSettings Settings; /* 0x0008 */
  FB_STDARRAY(struct SharedBundleReference) Parents; /* 0x0028 */
  FB_BOOLEAN ContainsControllable; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(BlueprintBundleReference) == 56);

}
