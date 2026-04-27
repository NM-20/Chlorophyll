#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862160
   RuntimeId:        2026
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C51C8
*/
enum PersistedLicenseEnvironment
{
  PersistedLicenseEnvironment_Dev = 0,
  PersistedLicenseEnvironment_Test = 1,
  PersistedLicenseEnvironment_Cert = 2,
  PersistedLicenseEnvironment_Prod = 3,
};

}
