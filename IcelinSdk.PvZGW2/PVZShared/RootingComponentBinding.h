#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 00000001428637C0
   RuntimeId:        2122
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9480
   Default Value:    0000000142BFE8C8
*/
#pragma pack(push, 4)
struct RootingComponentBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef IsRooting; /* 0x0000 */
  AntRef IsRooted; /* 0x0014 */
  AntRef IsUnRooting; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x003C */
#pragma pack(pop)

static_assert(sizeof(RootingComponentBinding) == 60);

}
