#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/WebUtils/WebUtilsEnvironment.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876FD0
   RuntimeId:        2E46
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08F6
   VfTable:          00000001423970C0
   Address (Base):   0000000143102BB0
*/
#pragma pack(push, 8)
class URLConfigData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_CSTRING BaseUrl; /* 0x0018 */
  FB_CSTRING Url; /* 0x0020 */
  WebUtilsEnvironment Environment; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(URLConfigData) == 48);

}
