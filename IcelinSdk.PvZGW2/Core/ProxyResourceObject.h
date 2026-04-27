#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        017A
   TypeInfo Kind:    ClassInfo
   ClassId:          05E1
   VfTable:          0000000000000000
   Address (Base):   0000000143122640
*/
class ProxyResourceObject
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0000[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(ProxyResourceObject) == 32);

}
