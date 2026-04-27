#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F0A8
   RuntimeId:        128D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8D88
   Default Value:    000000014284F0C0
*/
#pragma pack(push, 8)
struct DCCActorMappings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Actor; /* 0x0000 */
  AntRef DofSetList; /* 0x0014 */
  AntRef CodecOverride; /* 0x0028 */
  AntRef ClipImportResponseScript; /* 0x003C */
  FB_CSTRING ConnectBoneName; /* 0x0050 */
  FB_STDARRAY(FB_CSTRING) DCCNames; /* 0x0058 */
  FB_REFARRAY(class ObjectBlueprint) ActorBlueprints; /* 0x0060 */
  FB_CSTRING PreferredFbProxyControllerEntityLinkName; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(DCCActorMappings) == 112);

}
