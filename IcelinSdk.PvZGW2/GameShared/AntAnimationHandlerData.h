#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntAnimatableData.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>
#include <IcelinSdk.PvZGW2/GameShared/LodBinding.h>
#include <IcelinSdk.PvZGW2/GameShared/AnimationControlBinding.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F628
   RuntimeId:        12DB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA8C0
   Default Value:    0000000142BA4900
*/
#pragma pack(push, 8)
struct AntAnimationHandlerData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntAnimatableData Animatable; /* 0x0000 */
  AntRef RootController; /* 0x0070 */
  LodBinding LodBinding; /* 0x0084 */
  AnimationControlBinding AnimationControlBinding; /* 0x00E8 */
  char pad_00FC[0x0004];
  FB_STDARRAY(FB_INT32) JointOutputFieldHashes; /* 0x0100 */
  FB_STDARRAY(FB_INT32) JointEnabledFieldHashes; /* 0x0108 */
  FB_BOOLEAN ReportBackFromAnt; /* 0x0110 */
  FB_BOOLEAN EnableMasterSlaveCopy; /* 0x0111 */
  FB_BOOLEAN IsProp; /* 0x0112 */
  char pad_0113[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0118 */
#pragma pack(pop)

static_assert(sizeof(AntAnimationHandlerData) == 280);

}
