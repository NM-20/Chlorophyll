#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833410
   RuntimeId:        00FD
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B43A8
*/
enum Realm
{
  Realm_Client          = 0,
  Realm_Server          = 1,

  /* Interestingly, Frostbite doesn't define
     this in reflection.
  */
  Realm_Count           = 2,
  Realm_ClientAndServer = 2,
  Realm_None            = 3,
  Realm_Pipeline        = 4,
};

}
