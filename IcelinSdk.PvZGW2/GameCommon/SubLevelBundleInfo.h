#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BundleHeapInfo.h>
#include <IcelinSdk.PvZGW2/GameCommon/BundleType.h>
#include <IcelinSdk.PvZGW2/Entity/BundleSettingsInfo.h>

namespace fb
{

/* TypeInfo (Array): 0000000142841A40
   RuntimeId:        0B39
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CBC08
   Default Value:    0000000142841A58
*/
#pragma pack(push, 8)
struct SubLevelBundleInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 CompartmentIndex; /* 0x0000 */
  BundleHeapInfo HeapInfo; /* 0x0004 */
  BundleType BundleType; /* 0x0010 */
  char pad_0014[0x0004];
  BundleSettingsInfo BundleSettingsInfo; /* 0x0018 */
  FB_UINT16 SubLevelNameInx; /* 0x0028 */
  FB_UINT16 SubLevelId; /* 0x002A */
  FB_UINT16 ParentSubLevelId; /* 0x002C */
  FB_UINT8 Priority; /* 0x002E */
  char pad_002F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SubLevelBundleInfo) == 48);

}
